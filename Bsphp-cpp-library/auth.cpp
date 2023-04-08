//Codeant - DaMaYi 15:05 ���ڶ� 2023��3��21��
//https://github.com/Codeant-GitHub

#pragma once
#include "auth.hpp"

namespace Bsphp
{
	CString ServerUrl;
	CString MesKey;
	CString SeSsL;
	CString PcHWID;
	CString MyMD5;

	CString ��ȡ��ǰ����·��()
	{
		char ExeFile[200];
		//�õ���ǰ�ļ�·����
		GetModuleFileName(NULL, ExeFile, 200);
		string path = ExeFile;

		return path.c_str();
	}

	CString ��ȡ��ǰ����·�������ļ���()
	{
		TCHAR szFilePath[MAX_PATH + 1] = { 0 };
		GetModuleFileName(NULL, szFilePath, MAX_PATH);
		(_tcsrchr(szFilePath, _T('\\')))[1] = 0; // ɾ���ļ�����ֻ���·���ִ�
		CString str_url = szFilePath;  // ����str_url==e:\program\Debug\

		return str_url;
	}

	CString ��ȡ��ǰ�ļ���()
	{
		char ExeFile[200];
		//�õ���ǰ�ļ�·����
		GetModuleFileName(NULL, ExeFile, 200);
		string path = ExeFile;
		//1.��ȡ����·�����ļ���
		string::size_type iPos = path.find_last_of('\\') + 1;
		string filename = path.substr(iPos, path.length() - iPos);

		//2.��ȡ������׺���ļ���
		string name = filename.substr(0, filename.rfind("."));

		return name.c_str();
	}

	CString ��ȡ��ǰ�ļ�������׺()
	{
		char ExeFile[200];
		//�õ���ǰ�ļ�·����
		GetModuleFileName(NULL, ExeFile, 200);
		string path = ExeFile;
		//1.��ȡ����·�����ļ���
		string::size_type iPos = path.find_last_of('\\') + 1;
		string filename = path.substr(iPos, path.length() - iPos);

		return filename.c_str();
	}

	CString ��ȡ����MD5()
	{
		char ExeFile[200];
		//�õ���ǰ�ļ�·����
		GetModuleFileName(NULL, ExeFile, 200);
		MD5 md5;
		CString m_szMD5;
		m_szMD5 = md5.FileDigest(ExeFile).c_str();//ȡ����MD5��
		return m_szMD5;
	}

	CString ��ȡ����ʱ��()
	{
		time_t t = time(NULL);
		struct tm* stime = localtime(&t);
		char tmp[32] = { NULL };
		sprintf(tmp, "%04d-%02d-%02d %02d:%02d:%02d", 1900 + stime->tm_year, 1 + stime->tm_mon, stime->tm_mday, stime->tm_hour, stime->tm_min, stime->tm_sec);

		return tmp;
	}

	CString ȡ�������()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=miao.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ȡBSphpSeSsL()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=BSphpSeSsL.in&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString �û�����(CString UserName, CString PassWorld, CString Table, CString UserQQ, CString Leix, CString Txt)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=liuyan.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5="+ MyMD5 +"&user=" + UserName + "&pwd=" + PassWorld + "&table=" + Table + "&qq=" + UserQQ + "&leix=" + Leix + "&txt=" + Txt);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ȡ�����߼�ֵA����()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=logicinfoa.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ȡ�����߼�ֵA()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=logica.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ȡ�����߼�ֵB()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=logicb.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ȡ����汾��Ϣ()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=v.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ������֤()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=internet.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	BOOL ��ʼ��������Ϣ()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=internet.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);
		Http.HttpPost(ServerUrl, Data, RetData);

		if (RetData == "1") {
			return true;
		}
		return false;
	}

	CString ���ƽⶳ����־�ύ(CString User, CString Log)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=pushlog.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + User + "&log=" + User);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ȡԤ��URL��ַ()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=url.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ȡ������ϵͳʱ��(CString Date)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=date.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&date=" + Date);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ȡ�����߼�ֵB����()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=logicinfob.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ȡ����Ĺ���()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=gg.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ȡ���������Ϣ��(CString Info)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=globalinfo.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&info=" + Info);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ȡWeb�����ַ()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=weburl.in&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_����˺��Ƿ����(CString User)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=GetPleaseregister.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + User);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_�������˺�ע��(CString UserName, CString PassWorld, CString KH, CString KM, CString UserQQ, CString Mail, CString Mobile, CString Mibao_wenti, CString Mibao_daan, CString Extension)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=registrationaska.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&pwdb=" + PassWorld + "&kaid=" + KH + "&kapwd=" + KM + "&qq=" + UserQQ + "&mail=" + Mail + "&key=" + PcHWID + "&mobile=" + Mobile + "&mibao_wenti=" + Mibao_wenti + "&mibao_daan=" + Mibao_daan + "&extension=" + Extension);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_�����ֵvip����(CString UserName, CString PassWorld, CString KH, CString KM)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=chong.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&userpwd=" + PassWorld + "&userset=" + PassWorld + "&ka=" + KH + "&pwd=" + KM);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_ע���˺�(CString UserName, CString PassWorld, CString UserQQ, CString Mail, CString Mobile, CString Mibao_wenti, CString Mibao_daan, CString Extension)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=registration.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&pwdb=" + PassWorld + "&qq=" + UserQQ + "&mail=" + Mail + "&key=" + PcHWID + "&mobile=" + Mobile + "&mibao_wenti=" + Mibao_wenti + "&mibao_daan=" + Mibao_daan + "&extension=" + Extension);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_�һ�����(CString UserName, CString PassWorld, CString Mibao_wenti, CString Mibao_daan)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=backto.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&pwdb=" + PassWorld + "&wenti=" + Mibao_wenti + "&daan=" + Mibao_daan);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_ȡ�û�����ʱ��()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=vipdate.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_ͨ�������һ�����(CString UserName, CString Mail)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=BackMailPwd.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&mail=" + Mail);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_�û���¼(CString UserName, CString PassWorld)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=login.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&key=" + PcHWID + "&maxoror=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_ȡ�û���Ϣ(CString Info)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getuserinfo.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&info=" + Info);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_״̬����������()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=timeout.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_ȡ�û�������key()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=userkey.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_�����ܱ���Ϣ(CString Problem, CString Answer)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=setthesecuritycode.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&problem=" + Problem + "&answer=" + Answer);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_ȡ��֤����()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=lgkey.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&key=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_���˺�����(CString UserName, CString PassWorld)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=bang.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&key=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_��¼ģʽ�۵�ר��_�۵�(CString Balance, CString Onetime)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=pointsdeduction.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&balance=" + Balance + "&pwd=" + Onetime);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_����˺Ű�(CString UserName, CString PassWorld)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=jiekey.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_����ܱ���Ϣ�Ƿ���д()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=setcode.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_�жϰ�KEY�Ƿ����()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getnotkey.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&key=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_ע����½()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=cancellation.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_ȡ�õ�½״̬��Ϣ()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=lginfo.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_�����û�����(CString UserQQ, CString Mail, CString Mobile)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=Perfect.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&qq=" + UserQQ + "&mail=" + Mail + "&mobile=" + Mobile);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_Զ��ע����¼״̬(CString UserName, CString PassWorld, CString Type, CString Biaoji)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=remotecancellation.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&type=" + Type + "&biaoji=" + Biaoji);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ��¼_�޸�����(CString UserName, CString PassWorld, CString PassWorldA, CString PassWorldB)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=password.lg&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&pwda=" + PassWorldA + "&pwdb=" + PassWorldB);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ����_״̬����������()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=timeout.ic&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ����_ȡ��֤����()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getdata.ic&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&key=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ����_ע����¼()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=ע����¼.ic&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ����_����˺Ű�(CString UserName, CString PassWorld)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=setcarnot.ic&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&icid=" + UserName + "&icpwd=" + PassWorld);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ����_ȡ�����û���Ϣ(CString Info)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getinfo.ic&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&info=" + Info);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ����_ȡ��ģʽ����ʱ��()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getdate.ic&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ����_��ģʽ�û���¼��֤(CString UserName, CString PassWorld)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=login.ic&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&icid=" + UserName + "&icpwd=" + PassWorld + "&key=" + PcHWID + "&maxoror=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ����_ע����ӻ���������֤��¼(CString UserQQ)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getdate.ic&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&key=" + PcHWID + "&maxoror=" + PcHWID + "&carid=" + UserQQ);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ����_Զ��ע����¼״̬(CString UserName)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=remotecancellation.ic&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&icid=" + UserName);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ����_��֤��¼״̬()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getlkinfo.ic&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString ����_������Key(CString UserName, CString PassWorld)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=setcaron.ic&BSphpSeSsL=" + SeSsL + "&date=" + ��ȡ����ʱ��() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&icid=" + UserName + "&icpwd=" + PassWorld + "&key=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}
}