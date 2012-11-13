#include "stdafx.h"
#include "MainWnd.h"

LRESULT MainWnd::OnCreate(UINT /*msg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
    //LPCREATESTRUCT pCS = reinterpret_cast<LPCREATESTRUCT>(lParam);

    return TRUE;
}

LRESULT MainWnd::OnDestroy(UINT /*msg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
    PostQuitMessage(0);
    return 0;
}

LRESULT MainWnd::OnPaint(UINT /*msg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
    PAINTSTRUCT ps;
    BeginPaint(&ps);
    PaintContent(ps);
    EndPaint(&ps);

    return 0;
}

LRESULT MainWnd::OnPrintClient(UINT /*msg*/, WPARAM wParam, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
    PAINTSTRUCT ps;
    ps.hdc = reinterpret_cast<HDC>(wParam);
    GetClientRect(&ps.rcPaint);
    PaintContent(ps);

    return 0;
}

void MainWnd::PaintContent(PAINTSTRUCT& /*ps*/)
{
}
