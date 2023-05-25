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
	기능 : 회사 회원이 등록한 모든 채용 정보에 대한 통계를 나타내는 클래스
*/
class CompanyStatisticQuery{
public:
    unordered_map<string, int> calculateStatistic();
};

/*
	클래스 이름 : CompanyStatisticQueryUI
	기능 : 회사 회원이 등록한 모든 채용 정보에 대한 통계 UI를 나타내는 클래스
*/
class CompanyStatisticQueryUI{
private:
    CompanyStatisticQuery* companyStatisticQuery = new CompanyStatisticQuery();
public:
    void checkStatistic();
};





#endif