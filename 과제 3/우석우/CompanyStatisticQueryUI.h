#ifndef __COMPANYSTATISTICQUERY__
#define __COMPANYSTATISTICQUERY__
using namespace std;
#include <unordered_map>
#include "Session.h"
#include "EmploymentList.h"
#include "Application.h"
#include <vector>
class CompanyStatisticQuery{
public:
    unordered_map<string, int> calculateStatistic(){
        vector<EmploymentList>  empLists;
        vector<EmploymentList>* retEmp = EmploymentList::getEmploymentList();
        vector<Application>* retApp = Application::getApplications();
        unordered_map<string, int> workValues;

        for(int i=0; i<(* retEmp).size();i++){
            if((* retEmp)[i].getMember()->getId()==g_loginInfo.id){
                empLists.push_back((* retEmp)[i]);
            }
        }
         for (EmploymentList empList : empLists) {
            string work = empList.getWork();
            workValues[work] = 0;
        }
        for(int i=0; i<(* retApp).size();i++){
            if((* retApp)[i].getEmploymentList()->getMember()->getId()==g_loginInfo.id){
                workValues[(* retApp)[i].getEmploymentList()->getWork()]+=1;
            }
        }
        return workValues;

    }
};

class CompanyStatisticQueryUI{
private:
    CompanyStatisticQuery* companyStatisticQuery = new CompanyStatisticQuery();
public:
    void checkStatistic(){
        unordered_map<string,int> workValues = companyStatisticQuery->calculateStatistic();
    }
};





#endif