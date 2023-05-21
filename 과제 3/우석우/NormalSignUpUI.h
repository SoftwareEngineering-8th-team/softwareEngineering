#ifndef __NORMALSIGNUPUI__
#define __NORMALSIGNUPUI__
using namespace std;
#include <string>
#include "NormalMember.h"

class NormalSignUp{
public:
    void newMember(string name, int regiNum, string id, string password){
        NormalMember::newMember(name,regiNum,id,password);
    }
};
class NormalSignUpUI{
private:
    NormalSignUp* signup = new NormalSignUp();

public:
    void signUp(string name, int regiNum, string id, string password){
        signup->newMember(name, regiNum, id, password);
        

    }
};



#endif