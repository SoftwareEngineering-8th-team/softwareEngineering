#include <string>
#include <vector>
#include "CompanyMember.h"
#ifndef __EMPLOYMENTLIST__
#define __EMPLOYMENTLIST__

using namespace std;


class EmploymentList {
private:
    static vector<EmploymentList> employmentList;
    string companyName;
    string work;
    int applicationNum;
    string dueDate;
    CompanyMember member;
    CompanyMember id;

public:
    string getName();
    string getWork();
    int getApplicationNum();
    string getDueDate();
    CompanyMember getMember();
    CompanyMember getId();

    void setDueDate(string dueDate);
    void setCompanyName(string companyName);
    void setWork(string work);
    void setApplicationNum(int num);
    void setCompanyMember(CompanyMember member);

    static EmploymentList registerApply(string work, int applicationNum, string dueDate, string companyName,CompanyMember member);
    static vector<EmploymentList>* getEmploymentList();
};

#endif
