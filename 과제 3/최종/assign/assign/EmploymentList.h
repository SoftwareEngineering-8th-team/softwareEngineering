#include <string>
#include <vector>
#include "CompanyMember.h"
#ifndef __EMPLOYMENTLIST__
#define __EMPLOYMENTLIST__

using namespace std;

/*
   클래스 이름 : EmploymentList
   기능 : 회사가 등록한 채용정보
*/
class EmploymentList {
private:
    static vector<EmploymentList> employmentList;
    string companyName;
    string work;
    int applicationNum;
    string dueDate;
    CompanyMember member;

public:
    string getName();
    string getWork();
    int getApplicationNum();
    string getDueDate();
    CompanyMember getMember();

    void setDueDate(string dueDate);
    void setCompanyName(string companyName);
    void setWork(string work);
    void setApplicationNum(int num);
    void setCompanyMember(CompanyMember member);

    static EmploymentList registerApply(string work, int applicationNum, string dueDate, string companyName,CompanyMember member);
    static vector<EmploymentList>* getEmploymentList();
};

#endif
