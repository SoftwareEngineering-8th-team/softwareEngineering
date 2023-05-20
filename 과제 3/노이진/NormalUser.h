#include <iostream>
#include <vector>
#include "User.h"

using namespace std;


class NormalUser : public User
{
private:
	string registrationNum;       // 주민번호


public:
	// 생성자
	NormalUser() {};
	NormalUser(string registrationNum)
	{
		this->registrationNum = registrationNum;
	}

};