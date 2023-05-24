#include "CompanyMember.h"




vector<CompanyMember> CompanyMember::companyMembers;

CompanyMember CompanyMember::newMember(string companyName, int businessNumber, string id, string password) {
    CompanyMember companyMember;
    companyMember.setName(companyName);
    companyMember.setNumber(businessNumber);
    companyMember.setId(id);
    companyMember.setPassword(password);
    companyMembers.push_back(companyMember);
    return companyMember;
}

vector<CompanyMember>* CompanyMember::getCompanyMembers() {
    return &companyMembers;
}

void CompanyMember::deleteMember(string id) {
    vector<CompanyMember>* comMembers = getCompanyMembers();

    for (auto it = comMembers->begin(); it != comMembers->end();) {
        if (it->getId() == id) {
            it = comMembers->erase(it);
        } else {
            ++it;
        }
    }
}
