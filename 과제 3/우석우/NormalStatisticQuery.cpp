#include "NormalStatisticQuery.h"

unordered_map<string,int> NormalStatisticQuery::calculateStatistic(){
        unordered_map<string,int> workValues;
        vector<Application> applications;
        vector<Application>* retApp = Application::getApplications();
        for(int i=0; i<(* retApp).size();i++){
            if((* retApp)[i].getNormalMember().getId()==g_loginInfo.id){
                applications.push_back((* retApp)[i]);
            }
        }
        for (Application app : applications) {
            string work = app.getEmploymentList().getWork();
            if (workValues.find(work) == workValues.end()) {
                workValues[work] = 1;
            } else {
                workValues[work]++;
            }
        }
        return workValues;
}
void NormalStatisticQueryUI::checkStatistic(){
        unordered_map<string,int> workValues = normalStatisticQuery->calculateStatistic();
        fprintf(out_fp,"5.1. 지원 정보 통계\n");
        for (const auto& kvp : workValues) {
            const string& key = kvp.first;
            int value = kvp.second;
            fprintf(out_fp,"%s %d\n",key.c_str(),value);

        }
}
