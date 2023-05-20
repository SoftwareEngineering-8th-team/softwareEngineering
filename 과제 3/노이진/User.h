#include <iostream>
#include <vector>

using namespace std;


class User
{
private:
	string name;            // 회원명
	string id;              // 아이디
	string password;        // 비밀번호

public:
	// 생성자
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