#include <iostream>
#include <vector>

using namespace std;


class User
{
private:
	string name;            // ȸ����
	string id;              // ���̵�
	string password;        // ��й�ȣ

public:
	// ������
	User() {};
	User(string name, string id, string password)
	{
		this->name = name;
		this->id = id;
		this->password = password;
	}
	string getId() {
		return this->id;
	}
	string getPassword() {
		return this->password;
	}

	static void addNewUser(string name, string id, string password, vector<User> &user);
	void deleteUser(vector<User> &user);
	void getUser(string id, string password, vector<User> &user);

};