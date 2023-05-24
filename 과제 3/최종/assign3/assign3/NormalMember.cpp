#include "NormalMember.h"




vector<NormalMember> NormalMember::normalMembers;

NormalMember NormalMember::newMember(string companyName, int registrationNum, string id, string password) {
    NormalMember normalMember;
    normalMember.setName(companyName);
    normalMember.setNumber(registrationNum);
    normalMember.setId(id);
    normalMember.setPassword(password);
    NormalMember::normalMembers.push_back(normalMember);
    return normalMember;
}

vector<NormalMember>* NormalMember::getNormalMembers() {
    return &(NormalMember::normalMembers);
}

void NormalMember::deleteMember(string id) {
    vector<NormalMember>* noMembers = NormalMember::getNormalMembers();

    for (auto it = noMembers->begin(); it != noMembers->end(); ) {
        if (it->getId() == id) {
            it = noMembers->erase(it);
        } else {
            ++it;
        }
    }
}
