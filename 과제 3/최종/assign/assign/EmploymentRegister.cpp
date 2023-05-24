#include "EmploymentRegister.h"

/*
    함수 이름 : EmploymentRegister::registerApply
    기능 : 업무, 인원 수, 신청 마감일, 회사이름, 인원 수를 등록한다.
    전달 인자 : work, applicationNum, dueDate
    반환 인자 : registerApply()
*/
EmploymentList EmploymentRegister::registerApply(string work,int applicationNum,string dueDate){
            CompanyMember companyMember = (*(CompanyMember *)g_loginInfo.member);
            string companyName = companyMember.getName();
            return EmploymentList::registerApply(work,applicationNum,dueDate,companyName,companyMember);
}

/*
    함수 이름 : EmploymentRegisterUI::registerApply
    기능 : 등록된 업무, 인원 수, 신청 마감일을 출력한다.
    전달 인자 : work, applicationNum, dueDate
    반환 인자 : registerApply()
*/
void EmploymentRegisterUI::registerApply(string work,int applicationNum,string dueDate){
        EmploymentList emplist = employmentRegister->registerApply(work,applicationNum,dueDate);
        fprintf(out_fp,"3.1. 채용 정보 등록\n"); 
        fprintf(out_fp,"%s %d %s\n",emplist.getWork().c_str(),emplist.getApplicationNum(),emplist.getDueDate().c_str());
}