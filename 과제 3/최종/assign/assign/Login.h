#include "CompanyMember.h"
#include "NormalMember.h"
#include "Session.h"
#include <vector>
#include "file.h"
#include <iostream>
#ifndef __LOGIN__
#define __LOGIN__
using namespace std;
/*
    Logout : 로그아웃 컨트롤 클래스
*/

class Login{

public:
    Member login(string id, string password);
};
/*
    LogoutUI : 로그아웃 바운더리 클래스
*/
class LoginUI{
private:
    Login* loginCntl = new Login();

public:
    void login(string id, string password);
};

#endif 