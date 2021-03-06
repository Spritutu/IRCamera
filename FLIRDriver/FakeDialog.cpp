// FakeDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "FLIRDriver.h"
#include "FakeDialog.h"
#include "afxdialogex.h"
#include <assert.h>

// FakeDialog 对话框

IMPLEMENT_DYNAMIC(FakeDialog, CDialogEx)

FakeDialog::FakeDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(FakeDialog::IDD, pParent)
{
  event_observer = NULL;
}

FakeDialog::~FakeDialog()
{
}

void FakeDialog::DoDataExchange(CDataExchange* pDX)
{
  CDialogEx::DoDataExchange(pDX);
  DDX_Control(pDX, IDC_LVCAMCTRL, camera_control);
}


BEGIN_MESSAGE_MAP(FakeDialog, CDialogEx)
END_MESSAGE_MAP()

// CFSViewerView message handlers
BEGIN_EVENTSINK_MAP(FakeDialog, CDialogEx)
  ON_EVENT(FakeDialog, IDC_LVCAMCTRL, 103, FakeDialog::OnCameraEvent, VTS_I4)
END_EVENTSINK_MAP()

void DoSomething() {
  int a = 0;
  assert(a = 0);
}
void  FakeDialog::OnCameraEvent(long Id) {
  if (event_observer) {
    event_observer->OnEvent(Id);
  }
}

void  FakeDialog::SetEventHandler(FakeDialogEventObserver* observer) {
  event_observer = observer;
}