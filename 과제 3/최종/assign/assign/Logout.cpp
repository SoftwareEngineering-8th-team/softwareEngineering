#include "Logout.h"
/*
    함수 이름 : Logout::logout
    기능 : 전역 세션 구조체의 설정을 초기화해서 로그아웃 기능을 제공한다
    전달 인자 : 없음
    반환 인자 : 로그아웃한 회원의 아이디
*/
string Logout::logout() {
    g_loginInfo.isCompany = false;
    string temp = g_loginInfo.id;
    g_loginInfo.id = "";
    g_loginInfo.member=NULL;
    return temp;
}

/*
    함수 이름 : LogoutUI::logout
    기능 : Logout(컨트롤 클래스)의 logout함수를 호출하여 로그아웃 기능을 제공한다
    전달 인자 : 없음
    반환 인자 : 없음
*/
void LogoutUI::logout(){
    string id = logoutCtrl->logout();
    fprintf(out_fp,"2.2. 로그아웃\n");
    fprintf(out_fp,"%s\n",id.c_str());
}