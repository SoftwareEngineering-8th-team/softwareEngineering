#include <string>
#include "CompanyMember.h"
#include "file.h"


#ifndef __COMPANYSIGNUP__
#define __COMPANYSIGNUP__

using namespace std;


class CompanySignUp{
public:
    CompanyMember newMember(string name, int regiNum, string id, string password);
};

class CompanySignUpUI{
private:
    CompanySignUp* signup = new CompanySignUp();

public:
    void signUp(string name, int regiNum, string id, string password);
};



#endif