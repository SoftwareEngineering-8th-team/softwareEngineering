#include "NormalMember.h"



vector<NormalMember> NormalMember::normalMembers;

/*
	�Լ� �̸� : NormalMember::newMember
	��� : ���ο� �Ϲ� ������ �����Ѵ�.
	���� ���� : �̸�, �ֹι�ȣ, ���̵�, �н�����
	��ȯ ���� : normalMember
*/
NormalMember NormalMember::newMember(string name, int registrationNum, string id, string password) {
    NormalMember normalMember;
    normalMember.setName(name);
    normalMember.setNumber(registrationNum);
    normalMember.setId(id);
    normalMember.setPassword(password);
    NormalMember::normalMembers.push_back(normalMember);
    return normalMember;
}


/*
	�Լ� �̸� : NormalMember::getNormalMembers()
	��� : normalMember�� �����´�.
	���� ���� : ����
	��ȯ ���� : normalMember::normalMembers
*/
vector<NormalMember>* NormalMember::getNormalMembers() {
    return &(NormalMember::normalMembers);
}


/*
	�Լ� �̸� : NormalMember::deleteMember
	��� : �Ϲ������� �����Ѵ�.
	���� ���� : ���̵�
	��ȯ ���� : ����
*/
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
