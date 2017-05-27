﻿/* event2/event-config.h
 *
 * This file was generated by autoconf when libevent was built, and post-
 * processed by Libevent so that its macros would have a uniform prefix.
 *
 * DO NOT EDIT THIS FILE.
 *
 * Do not rely on macros in this file existing in later versions.
 */

#ifndef _EVENT2_EVENT_CONFIG_H_
#define _EVENT2_EVENT_CONFIG_H_

/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if libevent should build without support for a debug mode */
/* #undef _EVENT_DISABLE_DEBUG_MODE */

/* Define if libevent should not allow replacing the mm functions */
/* #undef _EVENT_DISABLE_MM_REPLACEMENT */

/* Define if libevent should not be compiled with thread support */
/* #undef _EVENT_DISABLE_THREAD_SUPPORT */

/* Define to 1 if you have the `arc4random' function. */
/* #undef _EVENT_HAVE_ARC4RANDOM */

/* Define to 1 if you have the `arc4random_buf' function. */
/* #undef _EVENT_HAVE_ARC4RANDOM_BUF */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define _EVENT_HAVE_ARPA_INET_H 1

/* Define to 1 if you have the `clock_gettime' function. */
#define _EVENT_HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the declaration of `CTL_KERN', and to 0 if you
   don't. */
#define _EVENT_HAVE_DECL_CTL_KERN 1

/* Define to 1 if you have the declaration of `KERN_ARND', and to 0 if you
   don't. */
#define _EVENT_HAVE_DECL_KERN_ARND 0

/* Define to 1 if you have the declaration of `KERN_RANDOM', and to 0 if you
   don't. */
#define _EVENT_HAVE_DECL_KERN_RANDOM 1

/* Define to 1 if you have the declaration of `RANDOM_UUID', and to 0 if you
   don't. */
#define _EVENT_HAVE_DECL_RANDOM_UUID 1

/* Define if /dev/poll is available */
/* #undef _EVENT_HAVE_DEVPOLL */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define _EVENT_HAVE_DLFCN_H 1

/* Define if your system supports the epoll system calls */
#define _EVENT_HAVE_EPOLL 1

/* Define to 1 if you have the `epoll_ctl' function. */
#define _EVENT_HAVE_EPOLL_CTL 1

/* Define to 1 if you have the `eventfd' function. */
#define _EVENT_HAVE_EVENTFD 1

/* Define if your system supports event ports */
/* #undef _EVENT_HAVE_EVENT_PORTS */

/* Define to 1 if you have the `fcntl' function. */
#define _EVENT_HAVE_FCNTL 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define _EVENT_HAVE_FCNTL_H 1

/* Define to 1 if the system has the type `fd_mask'. */
#define _EVENT_HAVE_FD_MASK 1

/* Do we have getaddrinfo()? */
#define _EVENT_HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getegid' function. */
#define _EVENT_HAVE_GETEGID 1

/* Define to 1 if you have the `geteuid' function. */
#define _EVENT_HAVE_GETEUID 1

/* Define this if you have any gethostbyname_r() */
/* #undef _EVENT_HAVE_GETHOSTBYNAME_R */

/* Define this if gethostbyname_r takes 3 arguments */
/* #undef _EVENT_HAVE_GETHOSTBYNAME_R_3_ARG */

/* Define this if gethostbyname_r takes 5 arguments */
/* #undef _EVENT_HAVE_GETHOSTBYNAME_R_5_ARG */

/* Define this if gethostbyname_r takes 6 arguments */
/* #undef _EVENT_HAVE_GETHOSTBYNAME_R_6_ARG */

/* Define to 1 if you have the `getnameinfo' function. */
#define _EVENT_HAVE_GETNAMEINFO 1

/* Define to 1 if you have the `getprotobynumber' function. */
#define _EVENT_HAVE_GETPROTOBYNUMBER 1

/* Define to 1 if you have the `getservbyname' function. */
/* #undef _EVENT_HAVE_GETSERVBYNAME */

/* Define to 1 if you have the `gettimeofday' function. */
#define _EVENT_HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `inet_aton' function. */
#define _EVENT_HAVE_INET_ATON 1

/* Define to 1 if you have the `inet_ntop' function. */
#define _EVENT_HAVE_INET_NTOP 1

/* Define to 1 if you have the `inet_pton' function. */
#define _EVENT_HAVE_INET_PTON 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define _EVENT_HAVE_INTTYPES_H 1

/* Define to 1 if you have the `issetugid' function. */
/* #undef _EVENT_HAVE_ISSETUGID */

/* Define to 1 if you have the `kqueue' function. */
/* #undef _EVENT_HAVE_KQUEUE */

/* Define if the system has zlib */
#define _EVENT_HAVE_LIBZ 1

/* Define to 1 if you have the <memory.h> header file. */
#define _EVENT_HAVE_MEMORY_H 1

/* Define to 1 if you have the `mmap' function. */
#define _EVENT_HAVE_MMAP 1

/* Define to 1 if you have the <netdb.h> header file. */
#define _EVENT_HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in6.h> header file. */
/* #undef _EVENT_HAVE_NETINET_IN6_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
#define _EVENT_HAVE_NETINET_IN_H 1

/* Define if the system has openssl */
#define _EVENT_HAVE_OPENSSL 1

/* Define to 1 if you have the <openssl/bio.h> header file. */
#define _EVENT_HAVE_OPENSSL_BIO_H 1

/* Define to 1 if you have the `pipe' function. */
#define _EVENT_HAVE_PIPE 1

/* Define to 1 if you have the `poll' function. */
#define _EVENT_HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define _EVENT_HAVE_POLL_H 1

/* Define to 1 if you have the `port_create' function. */
/* #undef _EVENT_HAVE_PORT_CREATE */

/* Define to 1 if you have the <port.h> header file. */
/* #undef _EVENT_HAVE_PORT_H */

/* Define if you have POSIX threads libraries and header files. */
/* #undef _EVENT_HAVE_PTHREAD */

/* Define if we have pthreads on this system */
#define _EVENT_HAVE_PTHREADS 1

/* Define to 1 if you have the `putenv' function. */
#define _EVENT_HAVE_PUTENV 1

/* Define to 1 if the system has the type `sa_family_t'. */
#define _EVENT_HAVE_SA_FAMILY_T 1

/* Define to 1 if you have the `select' function. */
#define _EVENT_HAVE_SELECT 1

/* Define to 1 if you have the `sendfile' function. */
#define _EVENT_HAVE_SENDFILE 1

/* Define to 1 if you have the `setenv' function. */
#define _EVENT_HAVE_SETENV 1

/* Define if F_SETFD is defined in <fcntl.h> */
#define _EVENT_HAVE_SETFD 1

/* Define to 1 if you have the `sigaction' function. */
#define _EVENT_HAVE_SIGACTION 1

/* Define to 1 if you have the `signal' function. */
#define _EVENT_HAVE_SIGNAL 1

/* Define to 1 if you have the `splice' function. */
#define _EVENT_HAVE_SPLICE 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define _EVENT_HAVE_STDARG_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define _EVENT_HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define _EVENT_HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define _EVENT_HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define _EVENT_HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define _EVENT_HAVE_STRING_H 1

/* Define to 1 if you have the `strlcpy' function. */
/* #undef _EVENT_HAVE_STRLCPY */

/* Define to 1 if you have the `strsep' function. */
#define _EVENT_HAVE_STRSEP 1

/* Define to 1 if you have the `strtok_r' function. */
#define _EVENT_HAVE_STRTOK_R 1

/* Define to 1 if you have the `strtoll' function. */
#define _EVENT_HAVE_STRTOLL 1

/* Define to 1 if the system has the type `struct addrinfo'. */
#define _EVENT_HAVE_STRUCT_ADDRINFO 1

/* Define to 1 if the system has the type `struct in6_addr'. */
#define _EVENT_HAVE_STRUCT_IN6_ADDR 1

/* Define to 1 if `s6_addr16' is a member of `struct in6_addr'. */
#define _EVENT_HAVE_STRUCT_IN6_ADDR_S6_ADDR16 1

/* Define to 1 if `s6_addr32' is a member of `struct in6_addr'. */
#define _EVENT_HAVE_STRUCT_IN6_ADDR_S6_ADDR32 1

/* Define to 1 if the system has the type `struct sockaddr_in6'. */
#define _EVENT_HAVE_STRUCT_SOCKADDR_IN6 1

/* Define to 1 if `sin6_len' is a member of `struct sockaddr_in6'. */
/* #undef _EVENT_HAVE_STRUCT_SOCKADDR_IN6_SIN6_LEN */

/* Define to 1 if `sin_len' is a member of `struct sockaddr_in'. */
/* #undef _EVENT_HAVE_STRUCT_SOCKADDR_IN_SIN_LEN */

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define _EVENT_HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if `ss_family' is a member of `struct sockaddr_storage'. */
#define _EVENT_HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1

/* Define to 1 if `__ss_family' is a member of `struct sockaddr_storage'. */
/* #undef _EVENT_HAVE_STRUCT_SOCKADDR_STORAGE___SS_FAMILY */

/* Define to 1 if you have the `sysctl' function. */
#define _EVENT_HAVE_SYSCTL 1

/* Define to 1 if you have the <sys/devpoll.h> header file. */
/* #undef _EVENT_HAVE_SYS_DEVPOLL_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
#define _EVENT_HAVE_SYS_EPOLL_H 1

/* Define to 1 if you have the <sys/eventfd.h> header file. */
#define _EVENT_HAVE_SYS_EVENTFD_H 1

/* Define to 1 if you have the <sys/event.h> header file. */
/* #undef _EVENT_HAVE_SYS_EVENT_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define _EVENT_HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define _EVENT_HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define _EVENT_HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/queue.h> header file. */
#define _EVENT_HAVE_SYS_QUEUE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define _EVENT_HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/sendfile.h> header file. */
#define _EVENT_HAVE_SYS_SENDFILE_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define _EVENT_HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define _EVENT_HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define _EVENT_HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define _EVENT_HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define _EVENT_HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define _EVENT_HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define _EVENT_HAVE_SYS_WAIT_H 1

/* Define if TAILQ_FOREACH is defined in <sys/queue.h> */
#define _EVENT_HAVE_TAILQFOREACH 1

/* Define if timeradd is defined in <sys/time.h> */
#define _EVENT_HAVE_TIMERADD 1

/* Define if timerclear is defined in <sys/time.h> */
#define _EVENT_HAVE_TIMERCLEAR 1

/* Define if timercmp is defined in <sys/time.h> */
#define _EVENT_HAVE_TIMERCMP 1

/* Define if timerisset is defined in <sys/time.h> */
#define _EVENT_HAVE_TIMERISSET 1

/* Define to 1 if the system has the type `uint16_t'. */
#define _EVENT_HAVE_UINT16_T 1

/* Define to 1 if the system has the type `uint32_t'. */
#define _EVENT_HAVE_UINT32_T 1

/* Define to 1 if the system has the type `uint64_t'. */
#define _EVENT_HAVE_UINT64_T 1

/* Define to 1 if the system has the type `uint8_t'. */
#define _EVENT_HAVE_UINT8_T 1

/* Define to 1 if the system has the type `uintptr_t'. */
#define _EVENT_HAVE_UINTPTR_T 1

/* Define to 1 if you have the `umask' function. */
#define _EVENT_HAVE_UMASK 1

/* Define to 1 if you have the <unistd.h> header file. */
#define _EVENT_HAVE_UNISTD_H 1

/* Define to 1 if you have the `unsetenv' function. */
#define _EVENT_HAVE_UNSETENV 1

/* Define to 1 if you have the `vasprintf' function. */
#define _EVENT_HAVE_VASPRINTF 1

/* Define if kqueue works correctly with pipes */
/* #undef _EVENT_HAVE_WORKING_KQUEUE */

/* Define to 1 if you have the <zlib.h> header file. */
#define _EVENT_HAVE_ZLIB_H 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define _EVENT_LT_OBJDIR ".libs/"

/* Numeric representation of the version */
#define _EVENT_NUMERIC_VERSION 0x02001600

/* Name of package */
#define _EVENT_PACKAGE "libevent"

/* Define to the address where bug reports for this package should be sent. */
#define _EVENT_PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define _EVENT_PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define _EVENT_PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define _EVENT_PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define _EVENT_PACKAGE_URL ""

/* Define to the version of this package. */
#define _EVENT_PACKAGE_VERSION ""

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef _EVENT_PTHREAD_CREATE_JOINABLE */

/* The size of `int', as computed by sizeof. */
#define _EVENT_SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define _EVENT_SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define _EVENT_SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define _EVENT_SIZEOF_OFF_T 8

/* The size of `pthread_t', as computed by sizeof. */
#define _EVENT_SIZEOF_PTHREAD_T 8

/* The size of `short', as computed by sizeof. */
#define _EVENT_SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define _EVENT_SIZEOF_SIZE_T 8

/* The size of `void *', as computed by sizeof. */
#define _EVENT_SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
#define _EVENT_STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define _EVENT_TIME_WITH_SYS_TIME 1

/* Version number of package */
#define _EVENT_VERSION "2.0.22-stable"

/* Define to appropriate substitue if compiler doesnt have __func__ */
/* #undef _EVENT___func__ */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef _EVENT_const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef _EVENT___cplusplus
/* #undef _EVENT_inline */
#endif

/* Define to `int' if <sys/types.h> does not define. */
/* #undef _EVENT_pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef _EVENT_size_t */

/* Define to unsigned int if you dont have it */
/* #undef _EVENT_socklen_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef _EVENT_ssize_t */

#endif /* event2/event-config.h */
