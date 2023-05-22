#include <string>
#include "NormalMember.h"
#include "file.h"
#ifndef __NORMALSIGNUP__
#define __NORMALSIGNUP__
using namespace std;
class NormalSignUp{
public:
    NormalMember newMember(string name, int regiNum, string id, string password);
};


class NormalSignUpUI{
private:
    NormalSignUp* signup = new NormalSignUp();

public:
    void signUp(string name, int regiNum, string id, string password);
};


#endif