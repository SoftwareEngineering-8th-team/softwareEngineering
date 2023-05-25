#include "Session.h"
#include "EmploymentList.h"
#include <vector> 
#include "file.h"
#ifndef __EMPLOYMENTQUERY__
#define __EMPLOYMENTQUERY__

/*
	클래스 이름 : EmploymentQuery
	기능 : 채용 정보를 출력하는 클래스
*/
class EmploymentQuery{
public:
    vector<EmploymentList> searchInfo();
};

/*
	클래스 이름 : EmploymentQueryUI
	기능 : 채용 정보에 대한 UI를 출력하는 클래스
*/
class EmploymentQueryUI{
private:
    EmploymentQuery* employmentQuery = new EmploymentQuery();
public:
    void serachInfo();
};

#endif