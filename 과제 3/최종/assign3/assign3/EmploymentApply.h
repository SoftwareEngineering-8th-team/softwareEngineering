#include <iostream>
#include "EmploymentList.h"
#include "Application.h"
#include "Session.h"
#include <string>
#include "file.h"
#include <algorithm>
#ifndef __EMPLOYMENTAPPLY__
#define __EMPLOYMENTAPPLY__

using namespace std;


class EmploymentApplyUI;


class EmploymentApply{
private:
    static vector<EmploymentList> searchedList;
    

public:
    vector<EmploymentList> searchByName(string name);
    static vector<EmploymentList>* getEmploymentLists();
    Application applyTo(int businessNumber);
    


    
};


class EmploymentApplyUI{
private:
    EmploymentApply* employmentApply = new EmploymentApply();

public:
    void searchByName(string name);
    void applyTo(int businessNumber);
    
    
};


#endif