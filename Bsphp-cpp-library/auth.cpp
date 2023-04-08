//Codeant - DaMaYi 15:05 星期二 2023年3月21日
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

	CString 获取当前运行路径()
	{
		char ExeFile[200];
		//得到当前文件路径名
		GetModuleFileName(NULL, ExeFile, 200);
		string path = ExeFile;

		return path.c_str();
	}

	CString 获取当前运行路径不带文件名()
	{
		TCHAR szFilePath[MAX_PATH + 1] = { 0 };
		GetModuleFileName(NULL, szFilePath, MAX_PATH);
		(_tcsrchr(szFilePath, _T('\\')))[1] = 0; // 删除文件名，只获得路径字串
		CString str_url = szFilePath;  // 例如str_url==e:\program\Debug\

		return str_url;
	}

	CString 获取当前文件名()
	{
		char ExeFile[200];
		//得到当前文件路径名
		GetModuleFileName(NULL, ExeFile, 200);
		string path = ExeFile;
		//1.获取不带路径的文件名
		string::size_type iPos = path.find_last_of('\\') + 1;
		string filename = path.substr(iPos, path.length() - iPos);

		//2.获取不带后缀的文件名
		string name = filename.substr(0, filename.rfind("."));

		return name.c_str();
	}

	CString 获取当前文件名带后缀()
	{
		char ExeFile[200];
		//得到当前文件路径名
		GetModuleFileName(NULL, ExeFile, 200);
		string path = ExeFile;
		//1.获取不带路径的文件名
		string::size_type iPos = path.find_last_of('\\') + 1;
		string filename = path.substr(iPos, path.length() - iPos);

		return filename.c_str();
	}

	CString 获取程序MD5()
	{
		char ExeFile[200];
		//得到当前文件路径名
		GetModuleFileName(NULL, ExeFile, 200);
		MD5 md5;
		CString m_szMD5;
		m_szMD5 = md5.FileDigest(ExeFile).c_str();//取程序MD5码
		return m_szMD5;
	}

	CString 获取本地时间()
	{
		time_t t = time(NULL);
		struct tm* stime = localtime(&t);
		char tmp[32] = { NULL };
		sprintf(tmp, "%04d-%02d-%02d %02d:%02d:%02d", 1900 + stime->tm_year, 1 + stime->tm_mon, stime->tm_mday, stime->tm_hour, stime->tm_min, stime->tm_sec);

		return tmp;
	}

	CString 取软件描述()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=miao.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 取BSphpSeSsL()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=BSphpSeSsL.in&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 用户留言(CString UserName, CString PassWorld, CString Table, CString UserQQ, CString Leix, CString Txt)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=liuyan.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5="+ MyMD5 +"&user=" + UserName + "&pwd=" + PassWorld + "&table=" + Table + "&qq=" + UserQQ + "&leix=" + Leix + "&txt=" + Txt);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 取布尔逻辑值A内容()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=logicinfoa.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 取布尔逻辑值A()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=logica.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 取布尔逻辑值B()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=logicb.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 取软件版本信息()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=v.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 网络验证()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=internet.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	BOOL 初始化返回信息()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=internet.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);
		Http.HttpPost(ServerUrl, Data, RetData);

		if (RetData == "1") {
			return true;
		}
		return false;
	}

	CString 反破解冻结日志提交(CString User, CString Log)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=pushlog.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + User + "&log=" + User);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 取预设URL地址()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=url.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 取服务器系统时间(CString Date)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=date.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&date=" + Date);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 取布尔逻辑值B内容()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=logicinfob.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 取软件的公告()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=gg.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 取软件配置信息段(CString Info)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=globalinfo.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&info=" + Info);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 取Web浏览地址()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=weburl.in&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_检测账号是否存在(CString User)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=GetPleaseregister.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + User);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_关联卡账号注册(CString UserName, CString PassWorld, CString KH, CString KM, CString UserQQ, CString Mail, CString Mobile, CString Mibao_wenti, CString Mibao_daan, CString Extension)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=registrationaska.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&pwdb=" + PassWorld + "&kaid=" + KH + "&kapwd=" + KM + "&qq=" + UserQQ + "&mail=" + Mail + "&key=" + PcHWID + "&mobile=" + Mobile + "&mibao_wenti=" + Mibao_wenti + "&mibao_daan=" + Mibao_daan + "&extension=" + Extension);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_软件充值vip续期(CString UserName, CString PassWorld, CString KH, CString KM)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=chong.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&userpwd=" + PassWorld + "&userset=" + PassWorld + "&ka=" + KH + "&pwd=" + KM);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_注册账号(CString UserName, CString PassWorld, CString UserQQ, CString Mail, CString Mobile, CString Mibao_wenti, CString Mibao_daan, CString Extension)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=registration.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&pwdb=" + PassWorld + "&qq=" + UserQQ + "&mail=" + Mail + "&key=" + PcHWID + "&mobile=" + Mobile + "&mibao_wenti=" + Mibao_wenti + "&mibao_daan=" + Mibao_daan + "&extension=" + Extension);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_找回密码(CString UserName, CString PassWorld, CString Mibao_wenti, CString Mibao_daan)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=backto.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&pwdb=" + PassWorld + "&wenti=" + Mibao_wenti + "&daan=" + Mibao_daan);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_取用户到期时间()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=vipdate.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_通过邮箱找回密码(CString UserName, CString Mail)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=BackMailPwd.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&mail=" + Mail);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_用户登录(CString UserName, CString PassWorld)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=login.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&key=" + PcHWID + "&maxoror=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_取用户信息(CString Info)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getuserinfo.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&info=" + Info);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_状态心跳包更新()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=timeout.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_取用户绑定特征key()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=userkey.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_设置密保信息(CString Problem, CString Answer)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=setthesecuritycode.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&problem=" + Problem + "&answer=" + Answer);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_取验证数据()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=lgkey.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&key=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_绑定账号特征(CString UserName, CString PassWorld)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=bang.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&key=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_登录模式扣点专用_扣点(CString Balance, CString Onetime)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=pointsdeduction.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&balance=" + Balance + "&pwd=" + Onetime);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_解除账号绑定(CString UserName, CString PassWorld)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=jiekey.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_检测密保信息是否填写()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=setcode.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_判断绑定KEY是否存在()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getnotkey.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&key=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_注销登陆()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=cancellation.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_取得登陆状态信息()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=lginfo.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_完善用户资料(CString UserQQ, CString Mail, CString Mobile)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=Perfect.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&qq=" + UserQQ + "&mail=" + Mail + "&mobile=" + Mobile);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_远程注销登录状态(CString UserName, CString PassWorld, CString Type, CString Biaoji)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=remotecancellation.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&type=" + Type + "&biaoji=" + Biaoji);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 登录_修改密码(CString UserName, CString PassWorld, CString PassWorldA, CString PassWorldB)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=password.lg&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&user=" + UserName + "&pwd=" + PassWorld + "&pwda=" + PassWorldA + "&pwdb=" + PassWorldB);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 卡串_状态心跳包更新()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=timeout.ic&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 卡串_取验证数据()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getdata.ic&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&key=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 卡串_注销登录()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=注销登录.ic&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 卡串_解除账号绑定(CString UserName, CString PassWorld)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=setcarnot.ic&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&icid=" + UserName + "&icpwd=" + PassWorld);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 卡串_取卡串用户信息(CString Info)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getinfo.ic&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&info=" + Info);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 卡串_取卡模式到期时间()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getdate.ic&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 卡串_卡模式用户登录验证(CString UserName, CString PassWorld)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=login.ic&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&icid=" + UserName + "&icpwd=" + PassWorld + "&key=" + PcHWID + "&maxoror=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 卡串_注册添加机器码与验证登录(CString UserQQ)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getdate.ic&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&key=" + PcHWID + "&maxoror=" + PcHWID + "&carid=" + UserQQ);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 卡串_远程注销登录状态(CString UserName)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=remotecancellation.ic&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&icid=" + UserName);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 卡串_验证登录状态()
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=getlkinfo.ic&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}

	CString 卡串_绑定特征Key(CString UserName, CString PassWorld)
	{
		CHttpClient Http;
		CString Data;
		string RetData;
		Data = _T("&api=setcaron.ic&BSphpSeSsL=" + SeSsL + "&date=" + 获取本地时间() + "&mutualkey=" + MesKey + "&md5=" + MyMD5 + "&icid=" + UserName + "&icpwd=" + PassWorld + "&key=" + PcHWID);

		Http.HttpPost(ServerUrl, Data, RetData);
		return  RetData.c_str();
	}
}