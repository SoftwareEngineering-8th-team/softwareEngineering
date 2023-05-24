#include <string>
#include "Member.h"
#ifndef __SESSION__
#define __SESSION__

using namespace std;


typedef struct {
    bool isCompany;
    string id;
    Member* member;
    
} LoginInfo; //세션 구조체 로그인 여부와 id를 담고 있음

extern LoginInfo g_loginInfo;


#endif