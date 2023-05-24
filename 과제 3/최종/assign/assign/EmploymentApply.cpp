#include "EmploymentApply.h"
#include <algorithm>

/*
    함수 이름 : compareEmploymentList
    기능 : EmploymentList에 있는 회사 이름을 오름차순으로 반환한다.
    전달 인자 : emp1, emp2
    반환 인자 : 회사 이름 오름차순
*/
bool compareEmploymentList(EmploymentList emp1, EmploymentList emp2)
{
  return emp1.getMember().getName() < emp2.getMember().getName();
}

/*
    함수 이름 : EmploymentApply::searchByName
    기능 : 회사이름이 같은 경우 empList에 넣고, empList에 있는 회사 이름을 오름차순으로 반환한다.
    전달 인자 : name
    반환 인자 : empList
*/
vector<EmploymentList> EmploymentApply::searchByName(string name)
{
  vector<EmploymentList> empList;
  vector<EmploymentList> *ret = EmploymentList::getEmploymentList();

  for (int i = 0; i < ret->size(); i++)
  {
    if ((*ret)[i].getMember().getName() == name)
    {
      empList.push_back((*ret)[i]);
    }
  }

  sort(empList.begin(), empList.end(), compareEmploymentList);
  searchedList = empList;
  return empList;
}

/*
    함수 이름 : EmploymentApply::getEmploymentLists
    기능 : 모든 EmploymentList에 대한 포인터를 반환한다.
    전달 인자 : 없음
    반환 인자 : &searchedList
*/
vector<EmploymentList> *EmploymentApply::getEmploymentLists()
{
  return &searchedList;
}

/*
    함수 이름 : EmploymentApply::applyTo
    기능 : 로그인한 인원에서 empLists에 EmploymentList를 가져와 사업자번호를 비교하여 찾으며, applyTo()를 반환한다.
    전달 인자 : businessNumber
    반환 인자 : applyTo()
*/
Application EmploymentApply::applyTo(int businessNumber)
{
  NormalMember normalMember = (*(NormalMember *)g_loginInfo.member);
  EmploymentList empList;
  vector<EmploymentList> *empLists = EmploymentApply::getEmploymentLists();
  for (int i = 0; i < (*empLists).size(); i++)
  {
    if ((*empLists)[i].getMember().getNumber() == businessNumber)
    {
      empList = (*empLists)[i];
      break;
    }
  }
  return Application::applyTo(normalMember, empList);
}

vector<EmploymentList> EmploymentApply::searchedList;

/*
    함수 이름 : EmploymentApplyUI::searchByName
    기능 : 채용 정보 리스트에 있는 회사이름, 사업자번호, 업무, 인원수, 마감일을 출력한다.
    전달 인자 : name
    반환 인자 : 없음
*/
void EmploymentApplyUI::searchByName(string name)
{
  vector<EmploymentList> empList = employmentApply->searchByName(name);
  fprintf(out_fp, "4.1. 채용 정보 검색\n");
  for (int i = 0; i < empList.size(); i++)
  {
    fprintf(out_fp, "%s %d %s %d %s\n", empList[i].getMember().getName().c_str(), empList[i].getMember().getNumber(), empList[i].getWork().c_str(), empList[i].getApplicationNum(), empList[i].getDueDate().c_str());
  }
}

/*
    함수 이름 : EmploymentApplyUI::searchByName
    기능 : 일반 회원이 지원을 희망하는 채용 정보를 선택하면 즉시 지원하며, 회사이름, 업무를 출력한다.
    전달 인자 : name
    반환 인자 : 없음
*/
void EmploymentApplyUI::applyTo(int businessNumber)
{
  Application application = employmentApply->applyTo(businessNumber);
  fprintf(out_fp, "4.2. 채용 지원\n");
  fprintf(out_fp, "%s %d %s\n", application.getEmploymentList().getMember().getName().c_str(), businessNumber, application.getEmploymentList().getWork().c_str());
}