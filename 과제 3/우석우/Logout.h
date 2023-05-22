#include <string>
#include "file.h"
#include "Session.h"
#include "file.h"
#include <iostream>
#ifndef __LOGOUT__
#define __LOGOUT__

using namespace std;




class Logout { // 컨트롤 클래스
public:
    string logout();
};


class LogoutUI { // 바운더리 클래스
private:
    Logout* logoutCtrl = new Logout();

public:
   
   void logout();

};
#endif 