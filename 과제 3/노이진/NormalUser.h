#include <iostream>
#include <vector>
#include "User.h"

using namespace std;


class NormalUser : public User
{
private:
	string registrationNum;       // �ֹι�ȣ


public:
	// ������
	NormalUser() {};
	NormalUser(string registrationNum)
	{
		this->registrationNum = registrationNum;
	}

};