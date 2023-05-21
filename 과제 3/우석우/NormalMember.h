#ifndef __NORMALMEMBER__
#define __NORMALMEMBER__

#include "Member.h"
#include <string>
#include <vector>
#include <algorithm>

class NormalMember : public Member {
private:
    static vector<NormalMember> normalMembers;

public:

    static NormalMember newMember(string companyName, int registrationNum, string id, string password) {
        NormalMember normalMember;
        normalMember.setName(companyName);
        normalMember.setNumber(registrationNum);
        normalMember.setId(id);
        normalMember.setPassword(password);
        normalMembers.push_back(normalMember);
        return normalMember;
    }

    static vector<NormalMember>* getNormalMembers() {
        return &(NormalMember::normalMembers);
    }

    
    static void deleteMember(const std::string& id) {
        vector<NormalMember>* noMembers = NormalMember::getNormalMembers();

        for (auto it = noMembers->begin(); it != noMembers->end(); ) {
            if (it->getId() == id) {
                it = noMembers->erase(it);
            } else {
                ++it;
            }
        }
    }
};

vector<NormalMember> NormalMember::normalMembers; // 정적 멤버 변수 초기화

#endif
