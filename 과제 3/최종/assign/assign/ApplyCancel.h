#include "Session.h"
#include <string>
#include "Application.h"
#include "file.h"
#ifndef __APPLYCANCEL__
#define __APPLYCANCEL__

/*
    Ŭ���� �̸� : ApplyCancel
    ��� : ������� ����� Control Ŭ����
*/
class ApplyCancel{
public:
    Application applyCancel(int businessNumber);
};

/*
    Ŭ���� �̸� : ApplyCancelUI
    ��� : ������� ����� Boundary Ŭ����
*/
class ApplyCancelUI{
private:
    ApplyCancel* applyCancel = new ApplyCancel();
public:
    void cancelApply(int businessNumber);

};




#endif