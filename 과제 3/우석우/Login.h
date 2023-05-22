#include "CompanyMember.h"
#include "NormalMember.h"
#include "Session.h"
#include <vector>
#include "file.h"
#include <iostream>
#ifndef __LOGIN__
#define __LOGIN__
using namespace std;
class Login{

public:
    Member login(string id, string password);
};
class LoginUI{
private:
    Login* loginCntl = new Login();

public:
    void login(string id, string password);
};

#endif 