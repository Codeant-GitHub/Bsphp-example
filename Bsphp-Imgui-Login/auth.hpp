//Codeant - DaMaYi 15:05 ���ڶ� 2023��3��21��
//https://github.com/Codeant-GitHub

#pragma once
#include <afxinet.h>

namespace Bsphp
{
	extern CString ServerUrl;
	extern CString MesKey;
	extern CString SeSsL;
	extern CString PcHWID;
	extern CString MyMD5;

	CString ��ȡ��ǰ����·��();
	CString ��ȡ��ǰ����·�������ļ���();
	CString ��ȡ��ǰ�ļ���();
	CString ��ȡ��ǰ�ļ�������׺();
	CString ��ȡ����MD5();
	CString ��ȡ����ʱ��();

	CString ������֤();
	BOOL ��ʼ��������Ϣ();
	CString ȡBSphpSeSsL();
	CString ȡ������ϵͳʱ��(CString Date);
	CString ȡ��������();
	CString ȡ�����汾��Ϣ();
	CString ȡ�����Ĺ���();
	CString ȡԤ��URL��ַ();
	CString ȡ�����߼�ֵA����();
	CString ȡ�����߼�ֵA();
	CString ȡ�����߼�ֵB����();
	CString ȡ�����߼�ֵB();
	CString ȡ����������Ϣ��(CString Info);
	CString ���ƽⶳ����־�ύ(CString User, CString Log);
	CString �û�����(CString UserName, CString PassWorld, CString Table, CString UserQQ, CString Leix, CString Txt);

	CString ��¼_����˺��Ƿ����(CString User);
	CString ��¼_�������˺�ע��(CString UserName, CString PassWorld, CString KH, CString KM, CString UserQQ, CString Mail, CString Mobile, CString Mibao_wenti, CString Mibao_daan, CString Extension);
	CString ��¼_������ֵvip����(CString UserName, CString PassWorld, CString KH, CString KM);
	CString ��¼_ע���˺�(CString UserName, CString PassWorld, CString UserQQ, CString Mail, CString Mobile, CString Mibao_wenti, CString Mibao_daan, CString Extension);
	CString ��¼_�һ�����(CString UserName, CString PassWorld, CString Mibao_wenti, CString Mibao_daan);
	CString ��¼_ȡ�û�����ʱ��();
	CString ��¼_ͨ�������һ�����(CString UserName, CString Mail);
	CString ��¼_�û���¼(CString UserName, CString PassWorld);
	CString ��¼_ȡ�û���Ϣ(CString Info);
	CString ��¼_״̬����������();
	CString ��¼_�����ܱ���Ϣ(CString Problem, CString Answer);
	CString ��¼_ȡ��֤����();
	CString ��¼_���˺�����(CString UserName, CString PassWorld);
	CString ��¼_��¼ģʽ�۵�ר��_�۵�(CString Balance, CString Onetime);
	CString ��¼_����˺Ű�(CString UserName, CString PassWorld);
	CString ��¼_����ܱ���Ϣ�Ƿ���д();
	CString ��¼_�жϰ�KEY�Ƿ����();
	CString ��¼_ע����½();
	CString ��¼_ȡ�õ�½״̬��Ϣ();
	CString ��¼_�����û�����(CString UserQQ, CString Mail, CString Mobile);
	CString ��¼_Զ��ע����¼״̬(CString UserName, CString PassWorld, CString Type, CString Biaoji);
	CString ��¼_�޸�����(CString UserName, CString PassWorld, CString PassWorldA, CString PassWorldB);

	CString ����_״̬����������();
	CString ����_ȡ��֤����();
	CString ����_ע����¼();
	CString ����_����˺Ű�(CString UserName, CString PassWorld);
	CString ����_ȡ�����û���Ϣ(CString Info);
	CString ����_ȡ��ģʽ����ʱ��();
	CString ����_��ģʽ�û���¼��֤(CString UserName, CString PassWorld);
	CString ����_ע�����ӻ���������֤��¼(CString UserQQ);
	CString ����_Զ��ע����¼״̬(CString UserName);
	CString ����_��֤��¼״̬();
	CString ����_������Key(CString UserName, CString PassWorld);

	void ���ݼ�������(const char* key);
}