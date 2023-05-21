#include "Logout.h"
#include "Session.h"
#include <iostream>


void LogoutUI::logout(){
    string id = this->logoutCtrl->logout();
    
}

string Logout::logout() {
    g_loginInfo.loggined = false;
    string temp = g_loginInfo.id;
    g_loginInfo.id = "";
    return temp;
}


