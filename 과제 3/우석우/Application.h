#ifndef __APPLICATION__
#define __APPLICATION__

using namespace std;
#include <vector> 
#include "NormalMember.h"
#include "EmploymentList.h"

class Application{
private:
    static vector<Application> applications;
    NormalMember* normalMember;
    EmploymentList* employmentList;
public:
    void setNormalMember(NormalMember* normalMember){
        this->normalMember=normalMember;
    }
    void setEmploymentList(EmploymentList* employmentList){
        this->employmentList = employmentList;
    }
    NormalMember* getNormalMember(){
        return this->normalMember;
    }
    EmploymentList* getEmploymentList(){
        return this->employmentList;
    }

    static Application applyTo(NormalMember* normalMember,EmploymentList* employmentList){
        Application* application = new Application();
        application->setEmploymentList(employmentList);
        application->setNormalMember(normalMember);
        Application::applications.push_back(*application);
        return (* application);
    }
    static vector<Application>* getApplications(){
        return &applications;
    }
    static Application deleteApplication(int number, string id) {
        Application deletedApplication;
        for (auto it = applications.begin(); it != applications.end(); ) {
            if (it->getNormalMember()->getId() == id && 
                it->getEmploymentList()->getMember()->getNumber() == number) {
                deletedApplication = *it;
                it = applications.erase(it);
                return deletedApplication;
            } else {
                ++it;
            }
        }
        return deletedApplication;
    }
    
    
};

vector<Application> Application::applications;
#endif