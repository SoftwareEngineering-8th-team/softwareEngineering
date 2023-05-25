#include <string>
#include "NormalMember.h"
#include "file.h"
#ifndef __NORMALSIGNUP__
#define __NORMALSIGNUP__
using namespace std;

/*
	클래스 이름 : NormalSignUp
	기능 : 일반 회원이 로그인 등록하는 컨트롤 클래스
*/
class NormalSignUp{
public:
    NormalMember newMember(string name, int regiNum, string id, string password);
};

/*
	클래스 이름 : NormalSignUpUI
	기능 : 일반 회원이 로그인 등록하는 바운더리 클래스
*/
class NormalSignUpUI{
private:
    NormalSignUp* signup = new NormalSignUp();

public:
    void signUp(string name, int regiNum, string id, string password);
};


#endif