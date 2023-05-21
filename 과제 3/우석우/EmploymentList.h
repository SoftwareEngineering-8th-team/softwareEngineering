#ifndef __EMPLOYMENTLIST__
#define __EMPLOYMENTLIST__
#include <string>
#include <vector>
#include "CompanyMember.h"
using namespace std;

class EmploymentList{
private:
    static vector<EmploymentList> employmentList;
    string companyName;
    string work;
    int applicationNum;
    string dueDate;
    CompanyMember* member;
public:

    
    string getName(){return this->companyName;}
    string getWork(){return this->work;}
    int getApplicationNum(){return this->applicationNum;}
    string getDueDate(){return this->dueDate;}
    CompanyMember* getMember(){return this->member;}

    void setDueDate(string dueDate){this->dueDate = dueDate;}
    void setCompanyName(string companyName){this->companyName=companyName;}
    void setWork(string work){this->work=work;}
    void setApplicationNum(int num){this->applicationNum=num;}
    void setCompanyMember(CompanyMember* member){this->member = member;}
    
    static EmploymentList registerApply(string work,int applicationNum,string dueDate,string companyName, CompanyMember* member) {
        EmploymentList employmentList;
        employmentList.setWork(work);
        employmentList.setApplicationNum(applicationNum);
        employmentList.setDueDate(dueDate);
        employmentList.setCompanyMember(member);
        EmploymentList::employmentList.push_back(employmentList);
        return employmentList;
    }
    static vector<EmploymentList>* getEmploymentList(){return &(EmploymentList::employmentList);}

};

#endif