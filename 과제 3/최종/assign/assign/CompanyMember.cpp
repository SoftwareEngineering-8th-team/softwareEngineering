#include "CompanyMember.h"

vector<CompanyMember> CompanyMember::companyMembers;




/*
	함수 이름 : CompanyMember::newMember
	기능 : 새로운 회사 유저를 생성한다.
	전달 인자 : 회사이름, 사업번호, 아이디, 패스워드
	반환 인자 : companyMember
*/
CompanyMember CompanyMember::newMember(string companyName, int businessNumber, string id, string password) {
    CompanyMember companyMember;
    companyMember.setName(companyName);
    companyMember.setNumber(businessNumber);
    companyMember.setId(id);
    companyMember.setPassword(password);
    companyMembers.push_back(companyMember);
    return companyMember;
}



/*
	함수 이름 : CompanyMember::getCompanyMembers()
	기능 : companyMember를 가져온다.
	전달 인자 : 없음
	반환 인자 : companyMember::companyMembers
*/
vector<CompanyMember>* CompanyMember::getCompanyMembers() {
    return &companyMembers;
}


/*
	함수 이름 : CompanyMember::deleteMember
	기능 : 회사유저를 삭제한다.
	전달 인자 : 아이디
	반환 인자 : 없음
*/
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
