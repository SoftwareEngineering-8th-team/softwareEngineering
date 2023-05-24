#include "ApplyCancel.h"




Application ApplyCancel::applyCancel(int businessNumber){
        Application application = Application::deleteApplication(businessNumber,g_loginInfo.id);
        return application;
}
void ApplyCancelUI::cancelApply(int businessNumber){
        Application application = applyCancel->applyCancel(businessNumber);
        string name = application.getEmploymentList().getMember().getName();
        int businessNum = application.getEmploymentList().getMember().getNumber();
        string work = application.getEmploymentList().getWork();
        fprintf(out_fp,"4.4. 지원 취소\n"); 
        fprintf(out_fp,"%s %d %s\n",name.c_str(),businessNum,work.c_str());
}