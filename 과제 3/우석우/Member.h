#ifndef __MEMBER__
#define __MEMBER__

using namespace std;


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>




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