#ifndef __EMPLOYMENTAPPLY__
#define __EMPLOYMENTAPPLY__

#include <iostream>
#include "EmploymentList.h"
#include "Application.h"
#include "Session.h"
#include <string>
using namespace std;
class EmploymentApplyUI;


class EmploymentApply{
private:
    static vector<EmploymentList> searchedList;
public:
    vector<EmploymentList> serachByName(string name){
        vector<EmploymentList> empList ;
        vector<EmploymentList>*  ret = EmploymentList::getEmploymentList();
        for(int i=0; i<(*ret).size(); i++){
            if((*ret)[i].getName()==name){
                empList.push_back((*ret)[i]);
            }
        }
        searchedList=empList;
        return empList;
    }
    static vector<EmploymentList>* getEmploymentLists(){
        return &searchedList;
    }
    Application applyTo(int businessNumber){
        NormalMember* normalMember = (NormalMember* )g_loginInfo.member;
        EmploymentList* empList;
        vector<EmploymentList>* empLists = EmploymentApply::getEmploymentLists();
        for(int i=0; i<(* empLists).size();i++){
            if((* empLists)[i].getMember()->getNumber() == businessNumber){
                empList = &(* empLists)[i];
                break; 
            }
        }
        return Application::applyTo(normalMember,empList);
    }
    


    
};

class EmploymentApplyUI{
private:
    EmploymentApply* employmentApply = new EmploymentApply();

public:
    void searchByName(string name){
        vector<EmploymentList> empList = employmentApply->serachByName(name);
        //뒷처리

    }
    void applyTo(int businessNumber){
        Application application = employmentApply->applyTo(businessNumber);
        //뒷처리

    }
    
    
};


#endif