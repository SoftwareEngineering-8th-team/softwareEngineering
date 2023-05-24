#include "CompanySignUp.h"



/*
	함수 이름 : CompanySignUp::newMember
	기능 : CompanyMember 클래스에게 인자들을 전달하여 newMember 함수를 호출한다.
	전달 인자 : 이름, 사업번호, 아이디, 패스워드
	반환 인자 : NormalMember
*/
CompanyMember CompanySignUp::newMember(string name, int busiNum, string id, string password) {
	return CompanyMember::newMember(name, busiNum, id, password);
}


/*
	함수 이름 : CompanySignUpUI::signUp
	기능 : 파일에서 읽은 인자들로 signup클래스의 newMember함수를 호출해 회원가입한다. 또한 수행 결과를 파일에 써준다.
	전달 인자 : 이름, 주민번호, 아이디, 패스워드
	반환 인자 : 없음
*/
void CompanySignUpUI::signUp(string name, int busiNum, string id, string password) {
	CompanyMember member = signup->newMember(name, busiNum, id, password);
	fprintf(out_fp, "%s %d %s %s\n", member.getName().c_str(), member.getNumber(), member.getId().c_str(), member.getPassword().c_str());

}