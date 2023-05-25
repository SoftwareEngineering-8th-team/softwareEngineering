#include "Member.h"
#include <string>
#include <vector>
#include <algorithm>
#include "file.h"
#ifndef __COMPANYMEMBER__
#define __COMPANYMEMBER__
using namespace std;


/*
	클래스 이름 : CompanyMember
	기능 : 회사회원 클래스 (회원 클래스를 상속)
*/
class CompanyMember : public Member {
private:
    static vector<CompanyMember> companyMembers;

public:
    static CompanyMember newMember(string companyName, int businessNumber, string id, string password);
    static vector<CompanyMember>* getCompanyMembers();
    static void deleteMember(string id);
};

#endif