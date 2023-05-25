#include "Member.h"
#include <string>
#include <vector>
#ifndef __NORMALMEMBER__
#define __NORMALMEMBER__

using namespace std;




/*
	클래스 이름 : NormalMember
	기능 : 일반회원 클래스 (회원 클래스를 상속)
*/
class NormalMember : public Member {
private:
    static vector<NormalMember> normalMembers;

public:
    static NormalMember newMember(string name, int registrationNum, string id, string password);
    static vector<NormalMember>* getNormalMembers();
    static void deleteMember(string id);
};

#endif