#include <string>
#include "CompanyMember.h"
#include "file.h"
#ifndef __COMPANYSIGNUP__
#define __COMPANYSIGNUP__
using namespace std;

/*
	클래스 이름 : CompanySignUp
	기능 : 회사 회원이 로그인 등록하는 컨트롤 클래스
*/
class CompanySignUp{
public:
    CompanyMember newMember(string name, int busiNum, string id, string password);
};

/*
	클래스 이름 : CompanySignUpUI
	기능 : 회사 회원이 로그인 등록하는 바운더리 클래스
*/
class CompanySignUpUI{
private:
    CompanySignUp* signup = new CompanySignUp();
public:
    void signUp(string name, int busiNum, string id, string password);
};



#endif