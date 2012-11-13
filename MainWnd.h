#pragma once

#include "stdafx.h"

class MainWnd : public ATL::CWindowImpl<MainWnd>
{
public:
    BEGIN_MSG_MAP(MainWnd)
        MESSAGE_HANDLER(WM_CREATE, OnCreate)
        MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
        MESSAGE_HANDLER(WM_PAINT, OnPaint)
        MESSAGE_HANDLER(WM_PRINTCLIENT, OnPrintClient)
    END_MSG_MAP()

    LRESULT OnCreate(UINT msg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
    LRESULT OnDestroy(UINT msg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
    LRESULT OnPaint(UINT msg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
    LRESULT OnPrintClient(UINT msg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);

protected:
    void PaintContent(PAINTSTRUCT& ps);
};
