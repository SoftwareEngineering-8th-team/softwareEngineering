#include "Session.h"
#include "EmploymentList.h"
#include <vector> 
#include "file.h"
#ifndef __NORMALEMPLOYMENTQUERY__
#define __NORMALEMPLOYMENTQUERY__

class NormalEmploymentQuery{
public:
    vector<EmploymentList> searchInfo();
};

class NormalEmploymentQueryUI{
private:
    NormalEmploymentQuery* normalEmploymentQuery = new NormalEmploymentQuery();
public:
    void serachInfo();
};

#endif