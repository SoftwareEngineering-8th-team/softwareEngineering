#ifndef __COMPANYSIGNUPUI__
#define __COMPANYSIGNUPUI__
using namespace std;
#include <string>
#include "CompanyMember.h"

class CompanySignUp{
public:
    void newMember(string name, int regiNum, string id, string password){
        CompanyMember::newMember(name,regiNum,id,password);
    }
};

class CompanySignUpUI{
private:
    CompanySignUp* signup;

public:
    CompanySignUpUI(){
        signup =  new CompanySignUp();
    }
    void signUp(string name, int regiNum, string id, string password){
        signup->newMember(name, regiNum, id, password);
        

    }
};



#endif