#include "Signout.h"
void SignoutUI::signout(){
        string id = signoutCtrl->deleteMember();
        fprintf(out_fp,"1.2. 회원탈퇴\n");
        fprintf(out_fp,"%s",id.c_str());
        
}

string Signout::deleteMember(){
        string id = g_loginInfo.id;
        g_loginInfo.id="";
        g_loginInfo.isCompany=false;
        g_loginInfo.member=NULL;
        NormalMember::deleteMember(id);
        CompanyMember::deleteMember(id);
        return id;
}