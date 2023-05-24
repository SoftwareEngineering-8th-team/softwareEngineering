#include "NormalMember.h"
#include "CompanyMember.h"
#include "Session.h"
#include "file.h"
#ifndef __SIGNOUT__
#define __SIGNOUT__

class Signout{

public:
    string deleteMember();
};

class SignoutUI{
private:
    Signout* signoutCtrl = new Signout();
    

public:
    void signout();
};




#endif