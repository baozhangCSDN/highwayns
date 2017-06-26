/*
 �V�X�e��  �@�F�q���[�}���G���[���P�x���V�X�e��
 �T�u�V�X�e���F���ʃ��W���[��
 �o�[�W�����@�F1.0.*
 ���쌠    �@�F�j���[�R���������2007
 �T�v      �@�F�T�[�r�X�Ώ�
 �X�V����  �@�F2007/12/25�@�@�A�R�@�@�V�K
*/
using System;
using System.Collections;
using System.Data;
using System.Data.SqlClient;
using System.Text.RegularExpressions;
using System.Security.Permissions;
using System.Runtime.Remoting.Lifetime;
using System.Text;
using System.IO;
using System.Data.OleDb;
using NC.HPS.Lib;

namespace NC.HEDAS.Lib
{
	/// <summary>
	/// �A�v���P�[�V�����E�T�[�r�X�̌��JAPI�B
	/// </summary>
	public class CmWinServiceAPI : MarshalByRefObject
	{


		#region �����ϐ�

        private static OleDbConnection Connection;

        #endregion

		#region �C���X�^���X�쐬�E����

		/// <summary>
		/// ������
		/// </summary>
		public CmWinServiceAPI()
		{
			try
			{
                string constr=null;
                NdnXmlConfig xmlConfig;
                string appName = Path.GetFileNameWithoutExtension( System.Windows.Forms.Application.ExecutablePath);
                xmlConfig = new NdnXmlConfig(string.Format(NCConst.CONFIG_FILE_DIR, appName) + NCUtility.GetAppConfig());

                if (!xmlConfig.ReadXmlData("database", "ConnectionString", ref constr))
                {
                    string msg = string.Format(NCMessage.GetInstance("").GetMessageById("CM0440E",""), "�T���v���Ԍ��i�b�j");
                    NCLogger.GetInstance().WriteErrorLog(msg);
                }

                Connection = new OleDbConnection(constr);
                Connection.Open();
			}
			catch (Exception e)
			{
                NCLogger.GetInstance().WriteExceptionLog(e);
			}
		}

		/// <summary>
        /// CmWinServiceAPI
		/// </summary>
		static CmWinServiceAPI()
		{
		}

        #endregion        

		#region ���JAPI�̓����

        /// <summary>
        /// Insert�AUpdate�Ȃ�SQL�����s
        /// </summary>
        /// <param name="strSQL"></param>
        /// <returns></returns>
        public bool ExeSQL(string strSQL)
        {
            bool resultState = false;

            //Connection.Open();
            //if (Connection.State != ConnectionState.Open) Connection.Open();
            OleDbTransaction myTrans = Connection.BeginTransaction();
            OleDbCommand command = new OleDbCommand(strSQL, Connection, myTrans);

            try
            {
                command.ExecuteNonQuery();
                myTrans.Commit();
                resultState = true;
            }
            catch(Exception ex)
            {
                myTrans.Rollback();
                resultState = false;
            }
            finally
            {
                //Connection.Close();
            }
            return resultState;
        }
        /// <summary>
        /// �f�[�^����
        /// </summary>
        /// <param name="strSQL"></param>
        /// <returns></returns>
        public DataSet ReturnDataSet(string strSQL)
        {
            //Connection.Open();
            //if (Connection.State != ConnectionState.Open) Connection.Open();
            DataSet dataSet = new DataSet();
            OleDbDataAdapter OleDbDA = new OleDbDataAdapter(strSQL, Connection);
            OleDbDA.Fill(dataSet, "objDataSet");

            //Connection.Close();
            return dataSet;
        }

        #endregion

    }
}