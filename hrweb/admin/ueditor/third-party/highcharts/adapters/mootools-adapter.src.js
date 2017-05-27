﻿
// JSLint options:
/*global Fx, $, $extend, $each, $merge, Events, Event, DOMEvent */

(function () {

var win = window,
	doc = document,
	mooVersion = win.MooTools.version.substring(0, 3), // Get the first three characters of the version number
	legacy = mooVersion === '1.2' || mooVersion === '1.1', // 1.1 && 1.2 considered legacy, 1.3 is not.
	legacyEvent = legacy || mooVersion === '1.3', // In versions 1.1 - 1.3 the event class is named Event, in newer versions it is named DOMEvent.
	$extend = win.$extend || function () {
		return Object.append.apply(Object, arguments);
	};

win.HighchartsAdapter = {
	init: function (pathAnim) {
		var fxProto = Fx.prototype,
			fxStart = fxProto.start,
			morphProto = Fx.Morph.prototype,
			morphCompute = morphProto.compute;

		// override Fx.start to allow animation of SVG element wrappers
		/*jslint unparam: true*//* allow unused parameters in fx functions */
		fxProto.start = function (from, to) {
			var fx = this,
				elem = fx.element;

			// special for animating paths
			if (from.d) {
				//this.fromD = this.element.d.split(' ');
				fx.paths = pathAnim.init(
					elem,
					elem.d,
					fx.toD
				);
			}
			fxStart.apply(fx, arguments);

			return this; // chainable
		};

		// override Fx.step to allow animation of SVG element wrappers
		morphProto.compute = function (from, to, delta) {
			var fx = this,
				paths = fx.paths;

			if (paths) {
				fx.element.attr(
					'd',
					pathAnim.step(paths[0], paths[1], delta, fx.toD)
				);
			} else {
				return morphCompute.apply(fx, arguments);
			}
		};
		/*jslint unparam: false*/
	},
	
	adapterRun: function (el, method) {
		
		// This currently works for getting inner width and height. If adding
		// more methods later, we need a conditional implementation for each.
		if (method === 'width' || method === 'height') {
			return parseInt($(el).getStyle(method), 10);
		}
	},

	getScript: function (scriptLocation, callback) {
		// We cannot assume that Assets class from mootools-more is available so instead insert a script tag to download script.
		var head = doc.getElementsByTagName('head')[0];
		var script = doc.createElement('script');

		script.type = 'text/javascript';
		script.src = scriptLocation;
		script.onload = callback;

		head.appendChild(script);
	},

	animate: function (el, params, options) {
		var isSVGElement = el.attr,
			effect,
			complete = options && options.complete;

		if (isSVGElement && !el.setStyle) {
			// add setStyle and getStyle methods for internal use in Moo
			el.getStyle = el.attr;
			el.setStyle = function () { // property value is given as array in Moo - break it down
				var args = arguments;
				this.attr.call(this, args[0], args[1][0]);
			};
			// dirty hack to trick Moo into handling el as an element wrapper
			el.$family = function () { return true; };
		}

		// stop running animations
		win.HighchartsAdapter.stop(el);

		// define and run the effect
		effect = new Fx.Morph(
			isSVGElement ? el : $(el),
			$extend({
				transition: Fx.Transitions.Quad.easeInOut
			}, options)
		);

		// Make sure that the element reference is set when animating svg elements
		if (isSVGElement) {
			effect.element = el;
		}

		// special treatment for paths
		if (params.d) {
			effect.toD = params.d;
		}

		// jQuery-like events
		if (complete) {
			effect.addEvent('complete', complete);
		}

		// run
		effect.start(params);

		// record for use in stop method
		el.fx = effect;
	},

	each: function (arr, fn) {
		return legacy ?
			$each(arr, fn) :
			Array.each(arr, fn);
	},

	map: function (arr, fn) {
		return arr.map(fn);
	},

	grep: function (arr, fn) {
		return arr.filter(fn);
	},
	
	inArray: function (item, arr, from) {
		return arr ? arr.indexOf(item, from) : -1;
	},

	offset: function (el) {
		var offsets = el.getPosition(); // #1496
		return {
			left: offsets.x,
			top: offsets.y
		};
	},

	extendWithEvents: function (el) {
		// if the addEvent method is not defined, el is a custom Highcharts object
		// like series or point
		if (!el.addEvent) {
			if (el.nodeName) {
				el = $(el); // a dynamically generated node
			} else {
				$extend(el, new Events()); // a custom object
			}
		}
	},

	addEvent: function (el, type, fn) {
		if (typeof type === 'string') { // chart broke due to el being string, type function

			if (type === 'unload') { // Moo self destructs before custom unload events
				type = 'beforeunload';
			}

			win.HighchartsAdapter.extendWithEvents(el);

			el.addEvent(type, fn);
		}
	},

	removeEvent: function (el, type, fn) {
		if (typeof el === 'string') {
			// el.removeEvents below apperantly calls this method again. Do not quite understand why, so for now just bail out.
			return;
		}
		
		if (el.addEvent) { // If el doesn't have an addEvent method, there are no events to remove
			if (type) {
				if (type === 'unload') { // Moo self destructs before custom unload events
					type = 'beforeunload';
				}
	
				if (fn) {
					el.removeEvent(type, fn);
				} else if (el.removeEvents) { // #958
					el.removeEvents(type);
				}
			} else {
				el.removeEvents();
			}
		}
	},

	fireEvent: function (el, event, eventArguments, defaultFunction) {
		var eventArgs = {
			type: event,
			target: el
		};
		// create an event object that keeps all functions
		event = legacyEvent ? new Event(eventArgs) : new DOMEvent(eventArgs);
		event = $extend(event, eventArguments);

		// When running an event on the Chart.prototype, MooTools nests the target in event.event
		if (!event.target && event.event) {
			event.target = event.event.target;
		}

		// override the preventDefault function to be able to use
		// this for custom events
		event.preventDefault = function () {
			defaultFunction = null;
		};
		// if fireEvent is not available on the object, there hasn't been added
		// any events to it above
		if (el.fireEvent) {
			el.fireEvent(event.type, event);
		}

		// fire the default if it is passed and it is not prevented above
		if (defaultFunction) {
			defaultFunction(event);
		}
	},
	
	washMouseEvent: function (e) {
		if (e.page) {
			e.pageX = e.page.x;
			e.pageY = e.page.y;
		}
		return e;
	},

	stop: function (el) {
		if (el.fx) {
			el.fx.cancel();
		}
	}
};

}());
