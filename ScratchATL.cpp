// ScratchATL.cpp : Implementation of WinMain

#include "stdafx.h"
#include "resource.h"
#include "MainWnd.h"

#pragma comment(lib, "comctl32")
#pragma comment(linker, "\"/manifestdependency:type='Win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

class ScratchAtlModule : public ATL::CAtlExeModuleT<ScratchAtlModule>
{
protected:
    MainWnd m_wnd;

public:

    HRESULT PreMessageLoop(int nShowCmd)
    {
        m_wnd.Create(NULL, ATL::CWindow::rcDefault, _T("Scratch ATL"), WS_OVERLAPPEDWINDOW | WS_VISIBLE, WS_EX_CLIENTEDGE, 0U, nullptr);
        m_wnd.ShowWindow(nShowCmd);

        return S_OK;
    }
};

ScratchAtlModule _AtlModule;

extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, LPTSTR /*lpCmdLine*/, int nShowCmd)
{
    INITCOMMONCONTROLSEX icce = { sizeof(INITCOMMONCONTROLSEX), ICC_STANDARD_CLASSES | ICC_WIN95_CLASSES };
    InitCommonControlsEx(&icce);

    _AtlModule.m_bDelayShutdown = FALSE;
    _AtlModule.WinMain(nShowCmd);

    return 0;
}
