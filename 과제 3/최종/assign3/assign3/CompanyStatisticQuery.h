#include <unordered_map>
#include "Session.h"
#include "EmploymentList.h"
#include "Application.h"
#include <vector>
#include "file.h"
#ifndef __COMPANYSTATISTICQUERY__
#define __COMPANYSTATISTICQUERY__
using namespace std;
class CompanyStatisticQuery{
public:
    unordered_map<string, int> calculateStatistic();
};

class CompanyStatisticQueryUI{
private:
    CompanyStatisticQuery* companyStatisticQuery = new CompanyStatisticQuery();
public:
    void checkStatistic();
};





#endif