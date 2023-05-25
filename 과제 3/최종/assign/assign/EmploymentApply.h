#include <iostream>
#include "EmploymentList.h"
#include "Application.h"
#include "Session.h"
#include <string>
#include "file.h"
#include <algorithm>
#ifndef __EMPLOYMENTAPPLY__
#define __EMPLOYMENTAPPLY__
using namespace std;
class EmploymentApplyUI;

/*
	클래스 이름 : EmploymentApply
	기능 : 채용 정보를 출력하고 지원할 수 있는 클래스
*/
class EmploymentApply{
private:
    static vector<EmploymentList> searchedList;
public:
    vector<EmploymentList> searchByName(string name);
    static vector<EmploymentList>* getEmploymentLists();
    Application applyTo(int businessNumber);
};


/*
	클래스 이름 : Application
	기능 : 채용 지원에 대한 UI를 출력하는 클래스
*/
class EmploymentApplyUI{
private:
    EmploymentApply* employmentApply = new EmploymentApply();
public:
    void searchByName(string name);
    void applyTo(int businessNumber);
};


#endif