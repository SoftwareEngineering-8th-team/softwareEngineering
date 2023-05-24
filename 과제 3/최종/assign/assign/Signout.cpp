#include "Signout.h"


/*
	함수 이름 : SignoutUI::signout
	기능 : 파일에서 읽은 인자로 Signout 클래스의 deleteMember() 함수를 호출해 회원탈퇴한다. 또한 수행 결과를 파일에 써준다.
	전달 인자 : 없음
	반환 인자 : 없음
*/
void SignoutUI::signout() {
	string id = signoutCtrl->deleteMember();
	fprintf(out_fp, "1.2. 회원탈퇴\n");
	fprintf(out_fp, "%s", id.c_str());

}

/*
	함수 이름 : Signout::deleteMember
	기능 : CompanyMember와 NormalMember의 deleteMember 함수를 호출한다.
	전달 인자 : id
	반환 인자 : id
*/
string Signout::deleteMember() {
	string id = g_loginInfo.id;
	if (g_loginInfo.isCompany == true) {
		CompanyMember::deleteMember(id);
	}
	else {
		NormalMember::deleteMember(id);
	}

	g_loginInfo.id = "";
	g_loginInfo.isCompany = false;
	g_loginInfo.member = NULL;

	return id;
}