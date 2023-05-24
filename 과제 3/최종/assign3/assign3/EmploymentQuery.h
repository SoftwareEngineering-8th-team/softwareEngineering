#include "Session.h"
#include "EmploymentList.h"
#include <vector> 
#include "file.h"
#ifndef __EMPLOYMENTQUERY__
#define __EMPLOYMENTQUERY__


class EmploymentQuery{
public:
    vector<EmploymentList> searchInfo();
};

class EmploymentQueryUI{
private:
    EmploymentQuery* employmentQuery = new EmploymentQuery();
public:
    void serachInfo();
};

#endif