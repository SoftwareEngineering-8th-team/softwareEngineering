#include <iostream>
#include <vector>
#include "User.h"

using namespace std;


class CompanyUser : public User
{
private:
	string businessNum;       // �����ȣ


public:
	// ������
	CompanyUser() {};
	CompanyUser(string name, string id, string password)
	{
		this->businessNum = businessNum;
	}

};