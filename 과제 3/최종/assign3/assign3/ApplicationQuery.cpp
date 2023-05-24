#include "ApplicationQuery.h"




bool compareApplications(Application app1, Application app2) {
    return app1.getEmploymentList().getName() < app2.getEmploymentList().getName();
    
}

vector<Application> ApplicationQuery::getApplications(){
        string id = g_loginInfo.id;
        vector<Application>* ret = Application::getApplications();
        vector<Application> applications;
        for(int i=0; i<(* ret).size();i++){
            if((* ret)[i].getNormalMember().getId()==id){
                applications.push_back((* ret)[i]);
            }
        }
        sort(applications.begin(), applications.end(), compareApplications);
        
        return applications;
}

void ApplicationQueryUI::getApplications(){
        vector<Application> applications = applicationQuery->getApplications();
        fprintf(out_fp,"4.3. 지원 정보 조회\n");
        for(int i=0; i<applications.size();i++){
            string name = applications[i].getEmploymentList().getMember().getName();
            int businessNumber = applications[i].getEmploymentList().getMember().getNumber();
            string work = applications[i].getEmploymentList().getWork();
            int applicationNumber = applications[i].getEmploymentList().getApplicationNum();
            string duedate = applications[i].getEmploymentList().getDueDate();
            fprintf(out_fp,"%s %d %s %d %s\n",name.c_str(),businessNumber,work.c_str(),applicationNumber,duedate.c_str());
        }
}