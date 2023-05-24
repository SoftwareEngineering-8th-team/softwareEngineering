#include "ApplyCancel.h"

/*
    함수 이름 : ApplyCancel::applyCancel
    기능 : 지원을 취소하고 취소된 지원정보를 반환해줌
    전달 인자 : 사업자번호
    반환 인자 : Application
*/
Application ApplyCancel::applyCancel(int businessNumber){
        Application application = Application::deleteApplication(businessNumber,g_loginInfo.id);
        return application;
}
/*
    함수 이름 : ApplyCancelUI::cancelApply
    기능 : 지원이 취소된 지원정보의 상세정보(회사이름,사업자 번호,업무) 및 지원 취소 완료 메세지를 출력해줌
    전달 인자 : 사업자번호
    반환 인자 : 없음
*/
void ApplyCancelUI::cancelApply(int businessNumber){
        Application application = applyCancel->applyCancel(businessNumber);
        string name = application.getEmploymentList().getMember().getName();
        int businessNum = application.getEmploymentList().getMember().getNumber();
        string work = application.getEmploymentList().getWork();
        fprintf(out_fp,"4.4. 지원 취소\n"); 
        fprintf(out_fp,"%s %d %s\n",name.c_str(),businessNum,work.c_str());
}