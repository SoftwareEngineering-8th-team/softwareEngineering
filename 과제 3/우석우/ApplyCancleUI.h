#ifndef __APPLYCANCELUI__
#define __APPLYCANCELUI__
#include "Session.h"
#include <string>
#include "Application.h"

class ApplyCancel{
public:
    Application applyCancel(int businessNumber){
        Application application = Application::deleteApplication(businessNumber,g_loginInfo.id);
        return application;
    }
};



class ApplyCancelUI{
private:
    ApplyCancel* applyCancel = new ApplyCancel();
public:
    void cancelApply(int businessNumber){
        Application application = applyCancel->applyCancel(businessNumber);
    }

};




#endif