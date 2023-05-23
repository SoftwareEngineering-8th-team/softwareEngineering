#include "Session.h"
#include "EmploymentList.h"
#include <vector> 
#include "file.h"
#ifndef __COMPANYEMPLOYMENTQUERY__
#define __COMPANYEMPLOYMENTQUERY__
class CompanyEmploymentQuery{
public:
    vector<EmploymentList> searchInfo();
};

class CompanyEmploymentQueryUI{
private:
    CompanyEmploymentQuery* companyEmploymentQuery = new CompanyEmploymentQuery();
public:
    void serachInfo();
};

#endif