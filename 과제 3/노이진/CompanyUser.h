#include <iostream>
#include <vector>
#include "User.h"

using namespace std;


class CompanyUser : public User
{
private:
	string businessNum;       // 사업번호


public:
	// 생성자
	CompanyUser() {};
	CompanyUser(string name, string id, string password)
	{
		this->businessNum = businessNum;
	}

};