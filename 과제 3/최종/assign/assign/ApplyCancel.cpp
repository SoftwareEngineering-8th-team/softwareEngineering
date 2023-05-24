#include "ApplyCancel.h"

/*
    함수 이름 : ApplyCancel::applyCancel
    기능 : 전달받은 사업자 번호를 통해 Application 클래스의 deleteApplication()함수를 호출해 지원을 취소하고 취소된 지원정보를 반환해준다.
    전달 인자 : businessNumber
    반환 인자 : Application
*/
Application ApplyCancel::applyCancel(int businessNumber){
        Application application = Application::deleteApplication(businessNumber,g_loginInfo.id);
        return application;
}
/*
    함수 이름 : ApplyCancelUI::cancelApply
    기능 : 파일에서 읽은 사업자번호로 ApplyCancel클래스의 applyCancel()함수를 호출하고, 지원 취소결과를 파일에 써준다.
    전달 인자 : businessNumber
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