#include "NormalMember.h"



vector<NormalMember> NormalMember::normalMembers;

/*
	함수 이름 : NormalMember::newMember
	기능 : 새로운 일반 유저를 생성한다.
	전달 인자 : 이름, 주민번호, 아이디, 패스워드
	반환 인자 : normalMember
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
	함수 이름 : NormalMember::getNormalMembers()
	기능 : normalMember를 가져온다.
	전달 인자 : 없음
	반환 인자 : normalMember::normalMembers
*/
vector<NormalMember>* NormalMember::getNormalMembers() {
    return &(NormalMember::normalMembers);
}


/*
	함수 이름 : NormalMember::deleteMember
	기능 : 일반유저를 삭제한다.
	전달 인자 : 아이디
	반환 인자 : 없음
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
