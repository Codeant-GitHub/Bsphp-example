//Codeant - DaMaYi 15:05 ���ڶ� 2023��3��21��
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

	Bsphp::���ݼ�������("Ju2mczwz1sTRnrmNml");

	if (!Bsphp::������֤())
	{
		std::cout << "\n ���ӷ�����ʧ�ܣ�";

		exit(0);
	}
	Bsphp::SeSsL = Bsphp::ȡBSphpSeSsL();

	Bsphp::PcHWID = "81006a361a1ba9b9a7b49ef6ec79998a";

	Bsphp::MyMD5 = Bsphp::��ȡ����MD5();

	std::cout << "\n ��ȡ��ǰ����·��:" << Bsphp::��ȡ��ǰ����·��() << "\n";

	std::cout << "\n ��ȡ��ǰ����·�������ļ���:" << Bsphp::��ȡ��ǰ����·�������ļ���() << "\n";

	std::cout << "\n ��ȡ��ǰ�ļ���:" << Bsphp::��ȡ��ǰ�ļ���() << "\n";

	std::cout << "\n ��ȡ��ǰ�ļ�������׺:" << Bsphp::��ȡ��ǰ�ļ�������׺() << "\n";

	std::cout << "\n ��ȡ��ǰ�ļ�������׺:" << Bsphp::��ȡ��ǰ�ļ�������׺() << "\n";

	std::cout << "\n PcHWID:" << Bsphp::PcHWID << "\n";

	std::cout << "\n MyMD5:" << Bsphp::MyMD5 << "\n";

	std::cout << "\n ��ȡ����ʱ��:" << Bsphp::��ȡ����ʱ��() << "\n";

	std::cout << "\n ������֤:" << Bsphp::������֤() << "\n";

	std::cout << "\n ��ʼ��������Ϣ:" << Bsphp::��ʼ��������Ϣ() << "\n";

	std::cout << "\n ȡBSphpSeSsL:" << Bsphp::SeSsL << "\n";

	std::cout << "\n ȡ������ϵͳʱ��:" << Bsphp::ȡ������ϵͳʱ��("") << "\n";

	std::cout << "\n ȡ�������:" << Bsphp::ȡ�������() << "\n";

	std::cout << "\n ȡ����汾��Ϣ:" << Bsphp::ȡ����汾��Ϣ() << "\n";

	std::cout << "\n ȡ����Ĺ���:" << Bsphp::ȡ����Ĺ���() << "\n";

	std::cout << "\n ȡԤ��URL��ַ:" << Bsphp::ȡԤ��URL��ַ() << "\n";

	std::cout << "\n ȡ�����߼�ֵA����:" << Bsphp::ȡ�����߼�ֵA����() << "\n";

	std::cout << "\n ȡ�����߼�ֵA:" << Bsphp::ȡ�����߼�ֵA() << "\n";

	std::cout << "\n ȡ�����߼�ֵB����:" << Bsphp::ȡ�����߼�ֵB����() << "\n";

	std::cout << "\n ȡ�����߼�ֵB:" << Bsphp::ȡ�����߼�ֵB() << "\n";

	std::cout << "\n ȡ���������Ϣ��:" << Bsphp::ȡ���������Ϣ��("GLOBAL_BSPHPDATE") << "\n";

	std::cout << "\n ���ƽⶳ����־�ύ:" << Bsphp::���ƽⶳ����־�ύ("1","1") << "\n";

	std::cout << "\n [1] �û���¼\n [2] ע���˺�\n [3] ����˺Ű�\n [4] ���˺�����\n [5] ����˺��Ƿ����\n [6] �޸�����\n [7] �һ�����\n [8] ͨ�������һ�����\n [9] �������˺�ע��\n [10] �����ֵvip����\n\n ��ѡ��Ҫִ�е�����: ";

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

	CString �û���¼����ֵ;
	CString �û���¼����ֵ��ȡ;

	std::cin >> option;
	switch (option)
	{
	case 1:
		std::cout << "\n �������û������س���ȷ�ϣ�: ";
		std::cin >> username;
		std::cout << "\n �������û����루�س���ȷ�ϣ�: ";
		std::cin >> password;
		�û���¼����ֵ = Bsphp::��¼_�û���¼(username.c_str(), password.c_str());
		std::cout << "\n " << "�û���¼����ֵ��" << �û���¼����ֵ << "\n";
		�û���¼����ֵ��ȡ = �û���¼����ֵ.Mid(0, 7);
		if (�û���¼����ֵ��ȡ == "01|1011")
		{
			std::cout << "\n " << "����ɹ���" << "\n";
			std::cout << "\n ȡ�û�����ʱ��:" << Bsphp::��¼_ȡ�û�����ʱ��() << "\n";
			std::cout << "\n ȡ��֤����:" << Bsphp::��¼_ȡ��֤����() << "\n";
			std::cout << "\n ȡ�õ�½״̬��Ϣ:" << Bsphp::��¼_ȡ�õ�½״̬��Ϣ() << "\n";
			std::cout << "\n ȡ�û���Ϣ���û����ƣ�:" << Bsphp::��¼_ȡ�û���Ϣ("UserName") << "\n";
			std::cout << "\n ȡ�û���Ϣ���û�UID��:" << Bsphp::��¼_ȡ�û���Ϣ("UserReDate") << "\n";
			std::cout << "\n ȡ�û���Ϣ������ʱIp��:" << Bsphp::��¼_ȡ�û���Ϣ("UserReIp") << "\n";
			std::cout << "\n ȡ�û���Ϣ���û�״̬��:" << Bsphp::��¼_ȡ�û���Ϣ("UserIsLock") << "\n";
			std::cout << "\n ȡ�û���Ϣ����¼ʱ�䣩:" << Bsphp::��¼_ȡ�û���Ϣ("UserLogInDate") << "\n";
			std::cout << "\n ȡ�û���Ϣ����¼Ip��:" << Bsphp::��¼_ȡ�û���Ϣ("UserLogInIp") << "\n";
			std::cout << "\n ȡ�û���Ϣ������ʱ�䣩:" << Bsphp::��¼_ȡ�û���Ϣ("UserVipDate") << "\n";
			std::cout << "\n ȡ�û���Ϣ����������:" << Bsphp::��¼_ȡ�û���Ϣ("UserKey") << "\n";
			std::cout << "\n ȡ�û���Ϣ���û��������ƣ�:" << Bsphp::��¼_ȡ�û���Ϣ("Class_Nane") << "\n";
			std::cout << "\n ȡ�û���Ϣ���û����������:" << Bsphp::��¼_ȡ�û���Ϣ("Class_Mark") << "\n";
			std::cout << "\n ȡ�û���Ϣ��vip�Ƿ���û�е��ڣ�:" << Bsphp::��¼_ȡ�û���Ϣ("UserVipWhether") << "\n";
		}
		break;
	case 2:
		std::cout << "\n �������û������س���ȷ�ϣ�: ";
		std::cin >> username;
		std::cout << "\n �������û����루�س���ȷ�ϣ�: ";
		std::cin >> password;
		std::cout << "\n �������û�QQ���루�س���ȷ�ϣ�: ";
		std::cin >> userqq;
		std::cout << "\n �������û�E-mail���س���ȷ�ϣ�: ";
		std::cin >> mail;
		std::cout << "\n �������û��ֻ����루�س���ȷ�ϣ�: ";
		std::cin >> mobile;
		std::cout << "\n �������û����뱣�����س���ȷ�ϣ�: ";
		std::cin >> mibao_wenti;
		std::cout << "\n �������û��ܱ��𰸣��س���ȷ�ϣ�: ";
		std::cin >> mibao_daan;
		std::cout << "\n " << "ע���˺ŷ���ֵ��" << Bsphp::��¼_ע���˺�(username.c_str(), password.c_str(), userqq.c_str(), mail.c_str(), mobile.c_str(), mibao_wenti.c_str(), mibao_daan.c_str(), "");
		break;
	case 3:
		std::cout << "\n �������û������س���ȷ�ϣ�: ";
		std::cin >> username;
		std::cout << "\n �������û����루�س���ȷ�ϣ�: ";
		std::cin >> password;
		std::cout << "\n " << "����˺Ű󶨷���ֵ��" << Bsphp::��¼_����˺Ű�(username.c_str(), password.c_str());
		break;
	case 4:
		std::cout << "\n �������û������س���ȷ�ϣ�: ";
		std::cin >> username;
		std::cout << "\n �������û����루�س���ȷ�ϣ�: ";
		std::cin >> password;
		std::cout << "\n " << "���˺���������ֵ��" << Bsphp::��¼_���˺�����(username.c_str(), password.c_str());
		break;
	case 5:
		std::cout << "\n �������û������س���ȷ�ϣ�: ";
		std::cin >> username;
		std::cout << "\n " << "����˺��Ƿ���ڷ���ֵ��" << Bsphp::��¼_����˺��Ƿ����(username.c_str());
		break;
	case 6:
		std::cout << "\n �������û������س���ȷ�ϣ�: ";
		std::cin >> username;
		std::cout << "\n ����������루�س���ȷ�ϣ�: ";
		std::cin >> password;
		std::cout << "\n �����������루�س���ȷ�ϣ�: ";
		std::cin >> passworda;
		std::cout << "\n ������ȷ�����루�س���ȷ�ϣ�: ";
		std::cin >> passwordb;
		std::cout << "\n " << "�޸����뷵��ֵ��" << Bsphp::��¼_�޸�����(username.c_str(), password.c_str(), passworda.c_str(), passwordb.c_str());
		break;
	case 7:
		std::cout << "\n �������û������س���ȷ�ϣ�: ";
		std::cin >> username;
		std::cout << "\n �����������루�س���ȷ�ϣ�: ";
		std::cin >> password;
		std::cout << "\n �������û����뱣�����س���ȷ�ϣ�: ";
		std::cin >> mibao_wenti;
		std::cout << "\n �������û��ܱ��𰸣��س���ȷ�ϣ�: ";
		std::cin >> mibao_daan;
		std::cout << "\n " << "�һ����뷵��ֵ��" << Bsphp::��¼_�һ�����(username.c_str(), password.c_str(), mibao_wenti.c_str(), mibao_daan.c_str());
		break;
	case 8:
		std::cout << "\n �������û������س���ȷ�ϣ�: ";
		std::cin >> username;
		std::cout << "\n �������û�E-mail���س���ȷ�ϣ�: ";
		std::cin >> mail;
		std::cout << "\n " << "ͨ�������һ����뷵��ֵ��" << Bsphp::��¼_ͨ�������һ�����(username.c_str(), mail.c_str());
		break;
	case 9:
		std::cout << "\n �������û������س���ȷ�ϣ�: ";
		std::cin >> username;
		std::cout << "\n �������û����루�س���ȷ�ϣ�: ";
		std::cin >> password;
		std::cout << "\n �����뿨�ţ��س���ȷ�ϣ�: ";
		std::cin >> kh;
		std::cout << "\n �����뿨�ܣ��س���ȷ�ϣ�: ";
		std::cin >> km;
		std::cout << "\n �������û�QQ���루�س���ȷ�ϣ�: ";
		std::cin >> userqq;
		std::cout << "\n �������û�E-mail���س���ȷ�ϣ�: ";
		std::cin >> mail;
		std::cout << "\n �������û��ֻ����루�س���ȷ�ϣ�: ";
		std::cin >> mobile;
		std::cout << "\n �������û����뱣�����س���ȷ�ϣ�: ";
		std::cin >> mibao_wenti;
		std::cout << "\n �������û��ܱ��𰸣��س���ȷ�ϣ�: ";
		std::cin >> mibao_daan;
		std::cout << "\n " << "�������˺�ע�᷵��ֵ��" << Bsphp::��¼_�������˺�ע��(username.c_str(), password.c_str(), kh.c_str(), km.c_str(), userqq.c_str(), mail.c_str(), mobile.c_str(), mibao_wenti.c_str(), mibao_daan.c_str(), "");
		break;
	case 10:
		std::cout << "\n �������û������س���ȷ�ϣ�: ";
		std::cin >> username;
		std::cout << "\n �������û����루�س���ȷ�ϣ�: ";
		std::cin >> password;
		std::cout << "\n �����뿨�ţ��س���ȷ�ϣ�: ";
		std::cin >> kh;
		std::cout << "\n �����뿨�ܣ��س���ȷ�ϣ�: ";
		std::cin >> km;
		std::cout << "\n " << "�����ֵvip���ڷ���ֵ��" << Bsphp::��¼_�����ֵvip����(username.c_str(), password.c_str(), kh.c_str(), km.c_str());
		break;
	default:
		std::cout << "\n ��ʾ: У������ֵ����";
		Sleep(3000);
		exit(0);
	}

	std::cout << "\n\n " << system("pause");

	return false;
}