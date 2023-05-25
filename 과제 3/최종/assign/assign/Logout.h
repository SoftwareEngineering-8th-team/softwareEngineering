#include <string>
#include "file.h"
#include "Session.h"
#include "file.h"
#include <iostream>
#ifndef __LOGOUT__
#define __LOGOUT__

using namespace std;



/*
	클래스 이름 : Logout
	기능 : 로그아웃 컨트롤 클래스
*/
class Logout {
public:
    string logout();
};

/*
	클래스 이름 : LogoutUI
	기능 : 로그아웃 바운더리 클래스
*/
class LogoutUI {
private:
    Logout* logoutCtrl = new Logout();

public:
   
   void logout();

};
#endif 