//Codeant - DaMaYi 15:05 星期二 2023年3月21日
//https://github.com/Codeant-GitHub

#pragma once
#define _WIN32_WINNT 0x0601
#include "auth.hpp"
#include <iostream>

const std::string compilation_date = __DATE__;
const std::string compilation_time = __TIME__;

int main()
{
	std::string consoleTitle = "Loader - Built at:  " + compilation_date + " " + compilation_time;
	SetConsoleTitleA(consoleTitle.c_str());

	std::cout << "\n Connecting..\n";

	Bsphp::ServerUrl = "http://app.bsphp.com/AppEn.php?appid=20230320&m=7644f1e890fbaa18b34f94eed9edce6c";

	Bsphp::MesKey = "69afc01007f6fa02772207d91b57465d";

	Bsphp::数据加密密码("Ju2mczwz1sTRnrmNml");

	if (!Bsphp::网络验证())
	{
		std::cout << "\n 连接服务器失败！";

		exit(0);
	}
	Bsphp::SeSsL = Bsphp::取BSphpSeSsL();

	Bsphp::PcHWID = "81006a361a1ba9b9a7b49ef6ec79998a";

	Bsphp::MyMD5 = Bsphp::获取程序MD5();

	std::cout << "\n 获取当前运行路径:" << Bsphp::获取当前运行路径() << "\n";

	std::cout << "\n 获取当前运行路径不带文件名:" << Bsphp::获取当前运行路径不带文件名() << "\n";

	std::cout << "\n 获取当前文件名:" << Bsphp::获取当前文件名() << "\n";

	std::cout << "\n 获取当前文件名带后缀:" << Bsphp::获取当前文件名带后缀() << "\n";

	std::cout << "\n 获取当前文件名带后缀:" << Bsphp::获取当前文件名带后缀() << "\n";

	std::cout << "\n PcHWID:" << Bsphp::PcHWID << "\n";

	std::cout << "\n MyMD5:" << Bsphp::MyMD5 << "\n";

	std::cout << "\n 获取本地时间:" << Bsphp::获取本地时间() << "\n";

	std::cout << "\n 网络验证:" << Bsphp::网络验证() << "\n";

	std::cout << "\n 初始化返回信息:" << Bsphp::初始化返回信息() << "\n";

	std::cout << "\n 取BSphpSeSsL:" << Bsphp::SeSsL << "\n";

	std::cout << "\n 取服务器系统时间:" << Bsphp::取服务器系统时间("") << "\n";

	std::cout << "\n 取软件描述:" << Bsphp::取软件描述() << "\n";

	std::cout << "\n 取软件版本信息:" << Bsphp::取软件版本信息() << "\n";

	std::cout << "\n 取软件的公告:" << Bsphp::取软件的公告() << "\n";

	std::cout << "\n 取预设URL地址:" << Bsphp::取预设URL地址() << "\n";

	std::cout << "\n 取布尔逻辑值A内容:" << Bsphp::取布尔逻辑值A内容() << "\n";

	std::cout << "\n 取布尔逻辑值A:" << Bsphp::取布尔逻辑值A() << "\n";

	std::cout << "\n 取布尔逻辑值B内容:" << Bsphp::取布尔逻辑值B内容() << "\n";

	std::cout << "\n 取布尔逻辑值B:" << Bsphp::取布尔逻辑值B() << "\n";

	std::cout << "\n 取软件配置信息段:" << Bsphp::取软件配置信息段("GLOBAL_BSPHPDATE") << "\n";

	std::cout << "\n 反破解冻结日志提交:" << Bsphp::反破解冻结日志提交("1","1") << "\n";

	std::cout << "\n [1] 用户登录\n [2] 注册账号\n [3] 解除账号绑定\n [4] 绑定账号特征\n [5] 检测账号是否存在\n [6] 修改密码\n [7] 找回密码\n [8] 通过邮箱找回密码\n [9] 关联卡账号注册\n [10] 软件充值vip续期\n\n 请选择要执行的内容: ";

	int option;
	std::string username;
	std::string password;
	std::string passworda;
	std::string passwordb;
	std::string kh;
	std::string km;
	std::string userqq;
	std::string mail;
	std::string mobile;
	std::string mibao_wenti;
	std::string mibao_daan;

	CString 用户登录返回值;
	CString 用户登录返回值截取;

	std::cin >> option;
	switch (option)
	{
	case 1:
		std::cout << "\n 请输入用户名（回车键确认）: ";
		std::cin >> username;
		std::cout << "\n 请输入用户密码（回车键确认）: ";
		std::cin >> password;
		用户登录返回值 = Bsphp::登录_用户登录(username.c_str(), password.c_str());
		std::cout << "\n " << "用户登录返回值：" << 用户登录返回值 << "\n";
		用户登录返回值截取 = 用户登录返回值.Mid(0, 7);
		if (用户登录返回值截取 == "01|1011")
		{
			std::cout << "\n " << "登入成功！" << "\n";
			std::cout << "\n 取用户到期时间:" << Bsphp::登录_取用户到期时间() << "\n";
			std::cout << "\n 取验证数据:" << Bsphp::登录_取验证数据() << "\n";
			std::cout << "\n 取得登陆状态信息:" << Bsphp::登录_取得登陆状态信息() << "\n";
			std::cout << "\n 取用户信息（用户名称）:" << Bsphp::登录_取用户信息("UserName") << "\n";
			std::cout << "\n 取用户信息（用户UID）:" << Bsphp::登录_取用户信息("UserReDate") << "\n";
			std::cout << "\n 取用户信息（激活时Ip）:" << Bsphp::登录_取用户信息("UserReIp") << "\n";
			std::cout << "\n 取用户信息（用户状态）:" << Bsphp::登录_取用户信息("UserIsLock") << "\n";
			std::cout << "\n 取用户信息（登录时间）:" << Bsphp::登录_取用户信息("UserLogInDate") << "\n";
			std::cout << "\n 取用户信息（登录Ip）:" << Bsphp::登录_取用户信息("UserLogInIp") << "\n";
			std::cout << "\n 取用户信息（到期时间）:" << Bsphp::登录_取用户信息("UserVipDate") << "\n";
			std::cout << "\n 取用户信息（绑定特征）:" << Bsphp::登录_取用户信息("UserKey") << "\n";
			std::cout << "\n 取用户信息（用户分组名称）:" << Bsphp::登录_取用户信息("Class_Nane") << "\n";
			std::cout << "\n 取用户信息（用户分组别名）:" << Bsphp::登录_取用户信息("Class_Mark") << "\n";
			std::cout << "\n 取用户信息（vip是否到期没有到期）:" << Bsphp::登录_取用户信息("UserVipWhether") << "\n";
		}
		break;
	case 2:
		std::cout << "\n 请输入用户名（回车键确认）: ";
		std::cin >> username;
		std::cout << "\n 请输入用户密码（回车键确认）: ";
		std::cin >> password;
		std::cout << "\n 请输入用户QQ号码（回车键确认）: ";
		std::cin >> userqq;
		std::cout << "\n 请输入用户E-mail（回车键确认）: ";
		std::cin >> mail;
		std::cout << "\n 请输入用户手机号码（回车键确认）: ";
		std::cin >> mobile;
		std::cout << "\n 请输入用户密码保护（回车键确认）: ";
		std::cin >> mibao_wenti;
		std::cout << "\n 请输入用户密保答案（回车键确认）: ";
		std::cin >> mibao_daan;
		std::cout << "\n " << "注册账号返回值：" << Bsphp::登录_注册账号(username.c_str(), password.c_str(), userqq.c_str(), mail.c_str(), mobile.c_str(), mibao_wenti.c_str(), mibao_daan.c_str(), "");
		break;
	case 3:
		std::cout << "\n 请输入用户名（回车键确认）: ";
		std::cin >> username;
		std::cout << "\n 请输入用户密码（回车键确认）: ";
		std::cin >> password;
		std::cout << "\n " << "解除账号绑定返回值：" << Bsphp::登录_解除账号绑定(username.c_str(), password.c_str());
		break;
	case 4:
		std::cout << "\n 请输入用户名（回车键确认）: ";
		std::cin >> username;
		std::cout << "\n 请输入用户密码（回车键确认）: ";
		std::cin >> password;
		std::cout << "\n " << "绑定账号特征返回值：" << Bsphp::登录_绑定账号特征(username.c_str(), password.c_str());
		break;
	case 5:
		std::cout << "\n 请输入用户名（回车键确认）: ";
		std::cin >> username;
		std::cout << "\n " << "检测账号是否存在返回值：" << Bsphp::登录_检测账号是否存在(username.c_str());
		break;
	case 6:
		std::cout << "\n 请输入用户名（回车键确认）: ";
		std::cin >> username;
		std::cout << "\n 请输入旧密码（回车键确认）: ";
		std::cin >> password;
		std::cout << "\n 请输入新密码（回车键确认）: ";
		std::cin >> passworda;
		std::cout << "\n 请输入确认密码（回车键确认）: ";
		std::cin >> passwordb;
		std::cout << "\n " << "修改密码返回值：" << Bsphp::登录_修改密码(username.c_str(), password.c_str(), passworda.c_str(), passwordb.c_str());
		break;
	case 7:
		std::cout << "\n 请输入用户名（回车键确认）: ";
		std::cin >> username;
		std::cout << "\n 请输入新密码（回车键确认）: ";
		std::cin >> password;
		std::cout << "\n 请输入用户密码保护（回车键确认）: ";
		std::cin >> mibao_wenti;
		std::cout << "\n 请输入用户密保答案（回车键确认）: ";
		std::cin >> mibao_daan;
		std::cout << "\n " << "找回密码返回值：" << Bsphp::登录_找回密码(username.c_str(), password.c_str(), mibao_wenti.c_str(), mibao_daan.c_str());
		break;
	case 8:
		std::cout << "\n 请输入用户名（回车键确认）: ";
		std::cin >> username;
		std::cout << "\n 请输入用户E-mail（回车键确认）: ";
		std::cin >> mail;
		std::cout << "\n " << "通过邮箱找回密码返回值：" << Bsphp::登录_通过邮箱找回密码(username.c_str(), mail.c_str());
		break;
	case 9:
		std::cout << "\n 请输入用户名（回车键确认）: ";
		std::cin >> username;
		std::cout << "\n 请输入用户密码（回车键确认）: ";
		std::cin >> password;
		std::cout << "\n 请输入卡号（回车键确认）: ";
		std::cin >> kh;
		std::cout << "\n 请输入卡密（回车键确认）: ";
		std::cin >> km;
		std::cout << "\n 请输入用户QQ号码（回车键确认）: ";
		std::cin >> userqq;
		std::cout << "\n 请输入用户E-mail（回车键确认）: ";
		std::cin >> mail;
		std::cout << "\n 请输入用户手机号码（回车键确认）: ";
		std::cin >> mobile;
		std::cout << "\n 请输入用户密码保护（回车键确认）: ";
		std::cin >> mibao_wenti;
		std::cout << "\n 请输入用户密保答案（回车键确认）: ";
		std::cin >> mibao_daan;
		std::cout << "\n " << "关联卡账号注册返回值：" << Bsphp::登录_关联卡账号注册(username.c_str(), password.c_str(), kh.c_str(), km.c_str(), userqq.c_str(), mail.c_str(), mobile.c_str(), mibao_wenti.c_str(), mibao_daan.c_str(), "");
		break;
	case 10:
		std::cout << "\n 请输入用户名（回车键确认）: ";
		std::cin >> username;
		std::cout << "\n 请输入用户密码（回车键确认）: ";
		std::cin >> password;
		std::cout << "\n 请输入卡号（回车键确认）: ";
		std::cin >> kh;
		std::cout << "\n 请输入卡密（回车键确认）: ";
		std::cin >> km;
		std::cout << "\n " << "软件充值vip续期返回值：" << Bsphp::登录_软件充值vip续期(username.c_str(), password.c_str(), kh.c_str(), km.c_str());
		break;
	default:
		std::cout << "\n 提示: 校验输入值错误！";
		Sleep(3000);
		exit(0);
	}

	std::cout << "\n\n " << system("pause");

	return false;
}