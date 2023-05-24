#include "CompanyStatisticQuery.h"
/*
    함수 이름 : CompanyStatisticQuery::calculateStatistic
    기능 : EmploymentList 클래스의 getEmploymentList()함수를 호출하여, 등록한 모든 채용정보의 지원자수를 계산해 업무별 지원자수를 반환해준다.
    전달 인자 : 없음
    반환 인자 : workValues
*/
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
/*
    함수 이름 : CompanyStatisticQueryUI::checkStatistic
    기능 : CompanyQuery 클래스의 calculateStatistic()함수를 호출하고, 등록한 모든 채용정보에 대한 업무별 지원자수를 파일에 써준다.
    전달 인자 : 없음
    반환 인자 : 없음
*/
void CompanyStatisticQueryUI::checkStatistic(){
        unordered_map<string,int> workValues = this->companyStatisticQuery->calculateStatistic();
        fprintf(out_fp,"5.1. 지원 정보 통계\n");
        for (const auto& kvp : workValues) {
            const string& key = kvp.first;
            int value = kvp.second;
            fprintf(out_fp,"%s %d\n",key.c_str(),value);

        }
}