#pragma once
#include "lvcamctrl.h"
#include "resource.h"
#include "IRCameraDriver.h"
// FakeDialog �Ի���

class FakeDialog : public CDialogEx
{
	DECLARE_DYNAMIC(FakeDialog)

public:
	FakeDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~FakeDialog();

// �Ի�������
	enum { IDD = IDD_FORMVIEW };

  class EventObserver {
  public:
    virtual void OnEvent(int event_type) = 0;
    virtual ~EventObserver()  {}
  };
  void  SetEventHandler(EventObserver* observer);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

  void OnCameraEvent(long Id);

	DECLARE_MESSAGE_MAP()
  DECLARE_EVENTSINK_MAP()
public:
  EventObserver*  event_observer;
  CLvcamctrl camera_control;
};
