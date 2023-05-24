#include "Application.h"




vector<Application> Application::applications;

void Application::setNormalMember(NormalMember normalMember) {
    this->normalMember = normalMember;
}

void Application::setEmploymentList(EmploymentList employmentList) {
    this->employmentList = employmentList;
}

NormalMember Application::getNormalMember()  {
    return normalMember;
}

EmploymentList Application::getEmploymentList()  {
    return employmentList;
}

// 신규 지원서를 생성하여 applications에 추가하는 함수
Application Application::applyTo(NormalMember normalMember, EmploymentList employmentList) {
    Application application;
    application.setEmploymentList(employmentList);
    application.setNormalMember(normalMember);
    applications.push_back(application);
    return application;
}

// 현재 저장된 모든 지원서를 반환하는 함수
vector<Application>* Application::getApplications() {
    return &applications;
}

// 주어진 번호와 아이디에 해당하는 지원서를 삭제하고 삭제된 지원서를 반환하는 함수
Application Application::deleteApplication(int number, string id) {
    Application deletedApplication;
    for (auto it = applications.begin(); it != applications.end(); ) {
        if (it->getNormalMember().getId() == id &&
            it->getEmploymentList().getMember().getNumber() == number) {
            deletedApplication = *it;
            it = applications.erase(it);
            return deletedApplication;
        } else {
            ++it;
        }
    }
    return deletedApplication;
}
