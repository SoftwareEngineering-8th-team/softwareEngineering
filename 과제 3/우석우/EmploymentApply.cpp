#include "EmploymentApply.h"
#include <algorithm>



bool compareEmploymentList(EmploymentList emp1,  EmploymentList emp2) {
    return emp1.getMember().getName() < emp2.getMember().getName();
}

vector<EmploymentList> EmploymentApply::searchByName(string name) {
    vector<EmploymentList> empList;
    vector<EmploymentList>* ret = EmploymentList::getEmploymentList();
    
    for (int i = 0; i < ret->size(); i++) {
        if ((*ret)[i].getMember().getName() == name) {
            empList.push_back((*ret)[i]);
        }
    }
    

    sort(empList.begin(), empList.end(),compareEmploymentList );
    searchedList = empList;
    return empList;
}



vector<EmploymentList>*  EmploymentApply::getEmploymentLists(){
        return &searchedList;
}

Application EmploymentApply::applyTo(int businessNumber){
        NormalMember normalMember = (*(NormalMember* )g_loginInfo.member);
        EmploymentList empList;
        vector<EmploymentList>* empLists = EmploymentApply::getEmploymentLists();
        for(int i=0; i<(* empLists).size();i++){
            if((* empLists)[i].getMember().getNumber() == businessNumber){
                empList = (* empLists)[i];
                break; 
            }
        }
        return Application::applyTo(normalMember,empList);
}

vector<EmploymentList> EmploymentApply::searchedList; 

void EmploymentApplyUI::searchByName(string name){
        vector<EmploymentList> empList = employmentApply->searchByName(name);
        fprintf(out_fp,"4.1. 채용 정보 검색\n");
        for(int i=0;i<empList.size();i++){
            fprintf(out_fp,"%s %d %s %d %s\n",empList[i].getMember().getName().c_str(),empList[i].getMember().getNumber(),empList[i].getWork().c_str(),empList[i].getApplicationNum(),empList[i].getDueDate().c_str());
        }

}

 void EmploymentApplyUI::applyTo(int businessNumber){
        Application application = employmentApply->applyTo(businessNumber);
        fprintf(out_fp,"4.2. 채용 지원\n");
        fprintf(out_fp,"%s %d %s\n",application.getEmploymentList().getMember().getName().c_str(),businessNumber,application.getEmploymentList().getWork().c_str());

}