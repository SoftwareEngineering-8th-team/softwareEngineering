#ifndef __NORMALSTATISTICQUERYUI__
#define __NORMALSTATISTICQUERYUI__
using namespace std;
#include <vector>
#include <unordered_map>
#include "Application.h"
#include "NormalMember.h"
#include "Session.h"
class NormalStatisticQuery{
public:
    unordered_map<string,int> calculateStatistic(){
        unordered_map<string,int> workValues;
        vector<Application> applications;
        vector<Application>* retApp = Application::getApplications();
        for(int i=0; i<(* retApp).size();i++){
            if((* retApp)[i].getNormalMember()->getId()==g_loginInfo.id){
                applications.push_back((* retApp)[i]);
            }
        }
        for (Application app : applications) {
            string work = app.getEmploymentList()->getWork();
            if (workValues.find(work) == workValues.end()) {
                workValues[work] = 0;
            } else {
                workValues[work]++;
            }
        }
        return workValues;


    }
};

class NormalStatisticQueryUI{
private:
    NormalStatisticQuery* normalStatisticQuery = new NormalStatisticQuery();


public:
     void checkStatistic(){
        unordered_map<string,int> workValues = normalStatisticQuery->calculateStatistic();
    }
};









#endif