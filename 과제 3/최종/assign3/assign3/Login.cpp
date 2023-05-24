#include "Login.h"


/*
	함수 이름 : Login::login
	기능 : 현재 Member 중 전달받은 아이디와 패스워드와 동일한 멤버를 찾아 반환한다.
	전달 인자 : 아이디, 패스워드
	반환 인자 : member
*/
Member Login::login(string id, string password) {
	Member member;
	member.setPassword("");
	member.setId("");
	vector<CompanyMember>* companyMembers = CompanyMember::getCompanyMembers();
	vector<NormalMember>* normalMembers = NormalMember::getNormalMembers();

	for (int i = 0; i < companyMembers->size(); i++) {
		if ((*companyMembers)[i].getId() == id && (*companyMembers)[i].getPassword() == password) {
			member.setId((*companyMembers)[i].getId());
			member.setPassword((*companyMembers)[i].getPassword());
			g_loginInfo.id = (*companyMembers)[i].getId();
			g_loginInfo.isCompany = true;
			g_loginInfo.member = &(*companyMembers)[i];


		}
	}
	for (int i = 0; i < normalMembers->size(); i++) {
		if ((*normalMembers)[i].getId() == id && (*normalMembers)[i].getPassword() == password) {
			member.setId((*normalMembers)[i].getId());
			member.setPassword((*normalMembers)[i].getPassword());
			g_loginInfo.id = (*normalMembers)[i].getId();
			g_loginInfo.member = &(*normalMembers)[i];
		}
	}

	return member;

}


void LoginUI::login(string id, string password) {
	Member member = loginCntl->login(id, password);
	fprintf(out_fp, "2.1. 로그인\n");
	fprintf(out_fp, "%s %s\n", member.getId().c_str(), member.getPassword().c_str());
}