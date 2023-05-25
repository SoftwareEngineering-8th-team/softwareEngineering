#include "Session.h"
#include <string>
#include "Application.h"
#include "file.h"
#ifndef __APPLYCANCEL__
#define __APPLYCANCEL__

/*
    클래스 이름 : ApplyCancel
    기능 : 지원취소 기능의 Control 클래스
*/
class ApplyCancel{
public:
    Application applyCancel(int businessNumber);
};

/*
    클래스 이름 : ApplyCancelUI
    기능 : 지원취소 기능의 Boundary 클래스
*/
class ApplyCancelUI{
private:
    ApplyCancel* applyCancel = new ApplyCancel();
public:
    void cancelApply(int businessNumber);

};




#endif