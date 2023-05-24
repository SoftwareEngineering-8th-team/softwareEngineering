#include "CompanyStatisticQuery.h"




unordered_map<string, int> CompanyStatisticQuery::calculateStatistic(){
        vector<EmploymentList>  empLists;
        vector<EmploymentList>* retEmp = EmploymentList::getEmploymentList();
        vector<Application>* retApp = Application::getApplications();
        unordered_map<string, int> workValues;

        for(int i=0; i<(* retEmp).size();i++){
            if((* retEmp)[i].getMember().getId()==g_loginInfo.id){
                empLists.push_back((* retEmp)[i]);
            }
        }
         for (EmploymentList empList : empLists) {
            string work = empList.getWork();
            workValues[work] = 0;
        }
        for(int i=0; i<(* retApp).size();i++){
            if((* retApp)[i].getEmploymentList().getMember().getId()==g_loginInfo.id){
                workValues[(* retApp)[i].getEmploymentList().getWork()]+=1;
            }
        }
        return workValues;
}

void CompanyStatisticQueryUI::checkStatistic(){
        unordered_map<string,int> workValues = this->companyStatisticQuery->calculateStatistic();
        fprintf(out_fp,"5.1. 지원 정보 통계\n");
        for (const auto& kvp : workValues) {
            const string& key = kvp.first;
            int value = kvp.second;
            fprintf(out_fp,"%s %d\n",key.c_str(),value);

        }
}