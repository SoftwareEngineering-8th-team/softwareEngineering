#include "Session.h"
#include "EmploymentList.h"
#include <string>
#include "file.h"
#ifndef __EMPLOYMENTREGISTER__
#define __EMPLOYMENTREGISTER__


class EmploymentRegister{
public:
    EmploymentList registerApply(string work,int applicationNum,string dueDate);
    
};
class EmploymentRegisterUI{
private:
    EmploymentRegister* employmentRegister = new EmploymentRegister();
public:
    void registerApply(string work,int applicationNum,string dueDate);

};
#endif