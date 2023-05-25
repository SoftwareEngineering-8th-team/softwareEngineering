#include <string>
#include "Member.h"
#ifndef __SESSION__
#define __SESSION__


using namespace std;


typedef struct {
    bool isCompany;
    string id;
    Member* member;
    
} LoginInfo; //세션 구조체 id와, 회사회원여부, 멤버에대한 레퍼런스를 갖고 있음

extern LoginInfo g_loginInfo;


#endif