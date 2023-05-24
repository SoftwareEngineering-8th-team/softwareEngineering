#include "CompanySignUp.h"

CompanyMember CompanySignUp::newMember(string name, int regiNum, string id, string password){
        return CompanyMember::newMember(name,regiNum,id,password);
}

void CompanySignUpUI::signUp(string name, int regiNum, string id, string password){
        CompanyMember member = signup->newMember(name, regiNum, id, password);
        fprintf(out_fp,"1.1. 회원가입\n");
        fprintf(out_fp,"%s %d %s %s\n",member.getName().c_str(),member.getNumber(),member.getId().c_str(),member.getPassword().c_str());    
}