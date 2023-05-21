#ifndef __LOGIN__
#define __LOGIN__
#include "CompanyMember.h"
#include "NormalMember.h"
#include "Session.h"
#include <vector>
class Login{

public:
    Member login(string id, string password){
        Member member;
        member.setPassword("");
        member.setId("");
        vector<CompanyMember>* companyMembers = CompanyMember::getCompanyMembers();
        vector<NormalMember>* normalMembers = NormalMember::getNormalMembers();
        
        for(int i=0; i<companyMembers->size();i++){
            if ((* companyMembers)[i].getId()==id && (* companyMembers)[i].getPassword()==password ){
                member.setId((* companyMembers)[i].getId());
                member.setPassword((* companyMembers)[i].getPassword());
                g_loginInfo.id=(* companyMembers)[i].getId();
                g_loginInfo.loggined=true;
                g_loginInfo.member=&(* companyMembers)[i];
                
                
            }
        }
        for(int i=0; i<normalMembers->size();i++){
            if ((* normalMembers)[i].getId()==id && (* normalMembers)[i].getPassword()==password ){
                member.setId((* normalMembers)[i].getId());
                member.setPassword((* normalMembers)[i].getPassword());
                g_loginInfo.id=(* normalMembers)[i].getId();
                g_loginInfo.loggined=true;
                g_loginInfo.member=&(* normalMembers)[i];
            }
        }
        
        
        return member;
        
        

    }
};
class LoginUI{
private:
    Login* loginCntl = new Login();

public:
    void login(string id, string password){
        Member member = loginCntl->login(id,password);

    }
};




#endif 