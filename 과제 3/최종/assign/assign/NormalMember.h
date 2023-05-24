#include "Member.h"
#include <string>
#include <vector>
#ifndef __NORMALMEMBER__
#define __NORMALMEMBER__

using namespace std;
class NormalMember : public Member {
private:
    static vector<NormalMember> normalMembers;

public:
    static NormalMember newMember(string name, int registrationNum, string id, string password);
    static vector<NormalMember>* getNormalMembers();
    static void deleteMember(string id);
};

#endif