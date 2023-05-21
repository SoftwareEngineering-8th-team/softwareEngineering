#ifndef __SESSION__
#define __SESSION__


using namespace std;
#include <string>
#include "Member.h"




typedef struct {
    bool loggined;
    string id;
    Member* member;
    
} LoginInfo; //세션 구조체 로그인 여부와 id를 담고 있음

LoginInfo g_loginInfo = { false, "" ,NULL};

#endif