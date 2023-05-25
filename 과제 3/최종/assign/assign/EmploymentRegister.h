#include "Session.h"
#include "EmploymentList.h"
#include <string>
#include "file.h"
#ifndef __EMPLOYMENTREGISTER__
#define __EMPLOYMENTREGISTER__

/*
    클래스 이름 : EmploymentRegister
    기능 : 채용 정보 등록하는 컨트롤 클래스
*/
class EmploymentRegister
{
public:
  EmploymentList registerApply(string work, int applicationNum, string dueDate);
};

/*
    클래스 이름 : EmploymentRegisterUI
    기능 : 채용 정보 등록하는 바운더리 클래스
*/
class EmploymentRegisterUI
{
private:
  EmploymentRegister *employmentRegister = new EmploymentRegister();

public:
  void registerApply(string work, int applicationNum, string dueDate);
};
#endif