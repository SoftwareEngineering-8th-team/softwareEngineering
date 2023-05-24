#include "EmploymentList.h"

vector<EmploymentList> EmploymentList::employmentList;

string EmploymentList::getName() {
    return this->companyName;
}

string EmploymentList::getWork() {
    return this->work;
}

int EmploymentList::getApplicationNum() {
    return this->applicationNum;
}

string EmploymentList::getDueDate() {
    return this->dueDate;
}

CompanyMember EmploymentList::getMember() {
    return this->member;
}

void EmploymentList::setDueDate(string dueDate) {
    this->dueDate = dueDate;
}

void EmploymentList::setCompanyName(string companyName) {
    this->companyName = companyName;
}

void EmploymentList::setWork(string work) {
    this->work = work;
}

void EmploymentList::setApplicationNum(int num) {
    this->applicationNum = num;
}

void EmploymentList::setCompanyMember(CompanyMember member) {
    this->member = member;
}

EmploymentList EmploymentList::registerApply(string work, int applicationNum, string dueDate, string companyName,CompanyMember member) {
    EmploymentList employmentList;
    employmentList.setWork(work);
    employmentList.setApplicationNum(applicationNum);
    employmentList.setDueDate(dueDate);
    employmentList.setCompanyMember(member);
    EmploymentList::employmentList.push_back(employmentList);
    return employmentList;
}
/*
    함수 이름 : EmploymentList::getEmploymentList()
    기능 : 현재 등록된 모든 채용정보를 반환한다.
    전달 인자 : 없음
    반환 인자 : EmploymentList::emplymentList
*/
vector<EmploymentList>* EmploymentList::getEmploymentList() {
    return &(EmploymentList::employmentList);
}
