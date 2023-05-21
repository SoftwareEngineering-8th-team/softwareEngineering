#ifndef __COMPANYMEMBER__
#define __COMPANYMEMBER__

#include "Member.h"
#include <string>
#include <vector>
#include <algorithm>

class CompanyMember : public Member {
private:
    
    static vector<CompanyMember> companyMembers;

public:
   
   

    static CompanyMember newMember(string companyName, int businessNumber, string id, string password) {
        CompanyMember companyMember;
        companyMember.setName(companyName);
        companyMember.setNumber(businessNumber);
        companyMember.setId(id);
        companyMember.setPassword(password);
        companyMembers.push_back(companyMember);
        return companyMember;
    }

    static vector<CompanyMember>* getCompanyMembers() {
        return &(CompanyMember::companyMembers);
    }

    
    static void deleteMember(const std::string& id) {
    vector<CompanyMember>* comMembers = CompanyMember::getCompanyMembers();

    for (auto it = comMembers->begin(); it != comMembers->end(); ) {
        if (it->getId() == id) {
            it = comMembers->erase(it);
        } else {
            ++it;
        }
    }
}
};

vector<CompanyMember> CompanyMember::companyMembers; // 정적 멤버 변수 초기화

#endif
