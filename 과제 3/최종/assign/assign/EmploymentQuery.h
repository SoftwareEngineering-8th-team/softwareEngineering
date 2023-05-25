#include "Session.h"
#include "EmploymentList.h"
#include <vector> 
#include "file.h"
#ifndef __EMPLOYMENTQUERY__
#define __EMPLOYMENTQUERY__

/*
	클래스 이름 : EmploymentQuery
	기능 : 채용 정보 검색에 대한 컨트롤 클래스
*/
class EmploymentQuery{
public:
    vector<EmploymentList> searchInfo();
};

/*
	클래스 이름 : EmploymentQueryUI
	기능 : 채용 정보 검색에 대한 바운더리 클래스
*/
class EmploymentQueryUI{
private:
    EmploymentQuery* employmentQuery = new EmploymentQuery();
public:
    void serachInfo();
};

#endif