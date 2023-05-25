#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "file.h"

#ifndef __MEMBER__
#define __MEMBER__

using namespace std;



/*
	클래스 이름 : Member
	기능 : 회원 클래스
*/
class Member{
private:
    string name;
    int number;
    string address;
    string id;
    string password;
    
public:
    /*
    getter 및 setter 함수
    */
    string getName(){return name;}
    int getNumber(){return number;}
    string getAddress(){return address;}
    string getId(){return id;}
    string getPassword(){return password;}

    void setName(string name){this->name=name;}
    void setAddress(string address){this->address=address;}
    void setNumber(int number){this->number=number;}
    void setId(string id){this->id=id;}
    void setPassword(string password){this->password=password;}
};

#endif