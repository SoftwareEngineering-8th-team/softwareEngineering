#include "NormalStatisticQuery.h"
/*
    함수 이름 : NormalStatisticQuery::calculateStatistic
    기능 : 지원한 지원정보의 지원횟수를 계산해 업무별 지원횟수를 반환해줌
    전달 인자 : 없음
    반환 인자 : unordered_map<string,int>
*/
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
/*
    함수 이름 : NormalStatisticQueryUI::checkStatistic
    기능 : 지원한 지원정보에 대해 업무별 지원 횟수를 출력해줌
    전달 인자 : 없음
    반환 인자 : 없음
*/
void NormalStatisticQueryUI::checkStatistic(){
        unordered_map<string,int> workValues = normalStatisticQuery->calculateStatistic();
        fprintf(out_fp,"5.1. 지원 정보 통계\n");
        for (const auto& kvp : workValues) {
            const string& key = kvp.first;
            int value = kvp.second;
            fprintf(out_fp,"%s %d\n",key.c_str(),value);

        }
}
