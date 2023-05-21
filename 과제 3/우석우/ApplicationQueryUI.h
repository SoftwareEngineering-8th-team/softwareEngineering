#ifndef __APPLICATIONQUERYUI__
#define __APPLICATIONQUERYUI__
using namespace std;
#include "Session.h"
#include "Application.h"
#include <vector>
#include <string>

class ApplicationQuery{
public:
    vector<Application> getApplications(){
        string id = g_loginInfo.id;
        vector<Application>* ret = Application::getApplications();
        vector<Application> applications;
        for(int i=0; i<(* ret).size();i++){
            if((* ret)[i].getNormalMember()->getId()==id){
                applications.push_back((* ret)[i]);
            }
        }
        return applications;
    }
};

class ApplicationQueryUI{
private:
    ApplicationQuery* applicationQuery = new ApplicationQuery();
public:
    void getApplications(){
        vector<Application> applications = applicationQuery->getApplications();
    }
};


#endif