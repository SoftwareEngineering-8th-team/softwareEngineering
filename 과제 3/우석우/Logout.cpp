#include "Logout.h"

string Logout::logout() {
    g_loginInfo.isCompany = false;
    string temp = g_loginInfo.id;
    g_loginInfo.id = "";
    g_loginInfo.member=NULL;
    return temp;
}


void LogoutUI::logout(){
    string id = logoutCtrl->logout();
    fprintf(out_fp,"2.2. 로그아웃\n");
    fprintf(out_fp,"%s\n",id.c_str());
}