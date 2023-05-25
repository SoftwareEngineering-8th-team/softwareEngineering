#include <unordered_map>
#include "Session.h"
#include "EmploymentList.h"
#include "Application.h"
#include <vector>
#include "file.h"
#ifndef __COMPANYSTATISTICQUERY__
#define __COMPANYSTATISTICQUERY__
using namespace std;

/*
	클래스 이름 : CompanyStatisticQuery
	기능 : 회사 통계 정보를 출력하는 클래스
*/
class CompanyStatisticQuery{
public:
    unordered_map<string, int> calculateStatistic();
};

/*
	클래스 이름 : CompanyStatisticQueryUI
	기능 : 회사 통계 정보를 받아 UI로 출력하는 클래스
*/
class CompanyStatisticQueryUI{
private:
    CompanyStatisticQuery* companyStatisticQuery = new CompanyStatisticQuery();
public:
    void checkStatistic();
};





#endif