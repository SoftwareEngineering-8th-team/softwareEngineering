#ifndef __LOGOUT__
#define __LOGOUT__

#include <string>

using namespace std;




class Logout { // 컨트롤 클래스
public:
    string logout(); //로그아웃을 수행하는 함수, ID를 리턴
};


class LogoutUI { // 바운더리 클래스
private:
    Logout* logoutCtrl = new Logout();

public:
   
    void logout(); // 로그아웃을 수행하느 함수, ID를 리턴
};


#endif 