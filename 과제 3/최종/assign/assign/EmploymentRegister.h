#include "Session.h"
#include "EmploymentList.h"
#include <string>
#include "file.h"
#ifndef __EMPLOYMENTREGISTER__
#define __EMPLOYMENTREGISTER__

/*
    클래스 이름 : EmploymentRegister
    기능 : 업무, 인원 수, 신청 마감일, 회사이름, 인원 수를 등록하는 클래스
*/
class EmploymentRegister
{
public:
  EmploymentList registerApply(string work, int applicationNum, string dueDate);
};

/*
    클래스 이름 : EmploymentRegisterUI
    기능 : 채용 지원 정보를 등록하는 UI를 출력하는 클래스
*/
class EmploymentRegisterUI
{
private:
  EmploymentRegister *employmentRegister = new EmploymentRegister();

public:
  void registerApply(string work, int applicationNum, string dueDate);
};
#endif