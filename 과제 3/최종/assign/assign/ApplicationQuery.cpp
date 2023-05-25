#include "ApplicationQuery.h"

/*
    함수 이름 : compareApplications
    기능 : 지원 회사의 이름으로 지원을 오름차순으로 정렬하는 헬퍼 함수
    전달 인자 : Application app1, Application app2
    반환 인자 : boolean
*/
bool compareApplications(Application app1, Application app2) {
    return app1.getEmploymentList().getName() < app2.getEmploymentList().getName();
    
}

/*
    함수 이름 : ApplicationQuery::getApplications
    기능 : 자신이 지원한 정보를 불러오는 함수
    전달 인자 : 없음
    반환 인자 : vector<Application>
*/
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


/*
    함수 이름 : ApplicationQueryUI::getApplications
    기능 : ApplicationQuery의 getApplications 함수를 호출하여 지원정보를 불러와 출력하는 함수
    전달 인자 : 없음
    반환 인자 : 없음
*/

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
