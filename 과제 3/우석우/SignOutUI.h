#ifndef __SIGNOUTUI__
#define __SIGNOUTUI__
#include "NormalMember.h"
#include "CompanyMember.h"
#include "Session.h"
class SignOut{

public:
    void deleteMember(){
        string id = g_loginInfo.id;
        g_loginInfo.id="";
        g_loginInfo.loggined=false;
        g_loginInfo.member=NULL;
        NormalMember::deleteMember(id);
        CompanyMember::deleteMember(id);

    }
};

class SignOutUI{
private:
    SignOut* signout = new SignOut();


public:
    void signOut(){
        signout->deleteMember();
        
    }
};




#endif