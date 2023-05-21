#ifndef __EMPLOYMENTQUERYUI__
#define __EMPLOYMENTQUERYUI__
#include "Session.h"
#include "EmploymentList.h"
#include <vector> 
class EmploymentQuery{
public:
    vector<EmploymentList> searchInfo(){
        vector<EmploymentList> emp;
        vector<EmploymentList>* getList = EmploymentList::getEmploymentList();
        for(int i=0; i<(*getList).size();i++){
            if((* getList)[i].getMember()->getId()==g_loginInfo.id){
                emp.push_back((* getList)[i]);
            }
        }
        return emp;
        
    }
};

class EmplymentQueryUI{
private:
    EmploymentQuery* employmentQuery = new EmploymentQuery();
public:
    void serachInfo(){ 
        vector<EmploymentList> emp = employmentQuery->searchInfo();
        
    }
};

#endif