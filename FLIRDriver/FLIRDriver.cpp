// FLIRDriver.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "FLIRDriver.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO:  ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����: 
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ��  ����ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// CFLIRDriverApp

BEGIN_MESSAGE_MAP(CFLIRDriverApp, CWinApp)
END_MESSAGE_MAP()


// CFLIRDriverApp ����

CFLIRDriverApp::CFLIRDriverApp()
{
	// TODO:  �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CFLIRDriverApp ����

CFLIRDriverApp theApp;


// CFLIRDriverApp ��ʼ��

BOOL CFLIRDriverApp::InitInstance()
{
	CWinApp::InitInstance();
  AfxEnableControlContainer();
	return TRUE;
}
