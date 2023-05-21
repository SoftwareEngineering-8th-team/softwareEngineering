#ifndef __EMPLOYMENTREGISTERUI__
#define __EMPLOYMENTREGISTERUI__
#include "Session.h"
#include "EmploymentList.h"
#include <string>
class EmploymentRegister{
public:
    EmploymentList registerApply(string work,int applicationNum,string dueDate){
            CompanyMember* companyMember = (CompanyMember *)g_loginInfo.member;
            string companyName = companyMember->getName();
            return EmploymentList::registerApply(work,applicationNum,dueDate,companyName,companyMember);
    }
    
};
class EmploymentRegisterUI{
private:
    EmploymentRegister* employmentRegister = new EmploymentRegister();
public:
    void registerApply(string work,int applicationNum,string dueDate){
        EmploymentList emplist = employmentRegister->registerApply(work,applicationNum,dueDate);
        
    }
};


#endif