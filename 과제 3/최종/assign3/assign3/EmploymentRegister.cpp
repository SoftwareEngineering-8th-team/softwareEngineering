#include "EmploymentRegister.h"




EmploymentList EmploymentRegister::registerApply(string work,int applicationNum,string dueDate){
            CompanyMember companyMember = (*(CompanyMember *)g_loginInfo.member);
            string companyName = companyMember.getName();
            return EmploymentList::registerApply(work,applicationNum,dueDate,companyName,companyMember);
}

void EmploymentRegisterUI::registerApply(string work,int applicationNum,string dueDate){
        EmploymentList emplist = employmentRegister->registerApply(work,applicationNum,dueDate);
        fprintf(out_fp,"3.1. 채용 정보 등록\n"); 
        fprintf(out_fp,"%s %d %s\n",emplist.getWork().c_str(),emplist.getApplicationNum(),emplist.getDueDate().c_str());
}