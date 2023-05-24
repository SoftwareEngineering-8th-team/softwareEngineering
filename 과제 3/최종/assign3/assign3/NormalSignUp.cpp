#include "NormalSignUp.h"




NormalMember NormalSignUp::newMember(string name, int regiNum, string id, string password){
        return NormalMember::newMember(name,regiNum,id,password);
}

void NormalSignUpUI::signUp(string name, int regiNum, string id, string password){
        NormalMember member = signup->newMember(name, regiNum, id, password);
        fprintf(out_fp,"1.2. 회원가입\n");
        fprintf(out_fp,"%s %d %s %s\n",member.getName().c_str(),member.getNumber(),member.getId().c_str(),member.getPassword().c_str());
}