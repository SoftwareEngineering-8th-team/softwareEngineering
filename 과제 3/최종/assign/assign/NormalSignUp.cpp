#include "NormalSignUp.h"


/*
	함수 이름 : NormalSignUp::newMember
	기능 : NormalMember 클래스에게 인자들을 전달하여 newMember() 함수를 호출한다.
	전달 인자 : 이름, 주민번호, 아이디, 패스워드
	반환 인자 : NormalMember
*/
NormalMember NormalSignUp::newMember(string name, int regiNum, string id, string password) {
	return NormalMember::newMember(name, regiNum, id, password);
}



/*
	함수 이름 : NormalSignUpUI::signUp
	기능 : 파일에서 읽은 인자들로 singUp()클래스의 nemMember() 함수를 호출해 회원가입한다. 또한 수행 결과를 파일에 써준다.
	전달 인자 : 이름, 주민번호, 아이디, 패스워드
	반환 인자 : 없음
*/
void NormalSignUpUI::signUp(string name, int regiNum, string id, string password) {
	NormalMember member = signup->newMember(name, regiNum, id, password);
	fprintf(out_fp, "%s %d %s %s\n", member.getName().c_str(), member.getNumber(), member.getId().c_str(), member.getPassword().c_str());

}