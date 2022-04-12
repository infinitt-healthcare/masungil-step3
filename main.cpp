#include <afxwin.h>
#include "resource.h"

//#define MAX_COUNT 100


class CMainFrame : public CFrameWnd {

};

class CMyApp : public CWinApp {
public:
	BOOL InitInstance() {
		CMainFrame* pMainFrame = new CMainFrame();
//		pMainFrame->Create(NULL, NULL);
		pMainFrame->LoadFrame(IDR_MAIN_FRAME);
		pMainFrame->ShowWindow(SW_SHOW);
		m_pMainWnd = pMainFrame;

		return TRUE;
	}
	int ExitInstance() {
		return 0;
	}
};

CMyApp theApp;
