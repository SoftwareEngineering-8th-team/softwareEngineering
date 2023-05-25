#include "NormalMember.h"
#include "EmploymentList.h"
#ifndef __APPLICATION__
#define __APPLICATION__
#include <vector>

using namespace std;

/*
	클래스 이름 : Application
	기능 : 일반회원이 지원한 회사 지원 클래스
*/
class Application {
private:
    static vector<Application> applications;
    NormalMember normalMember;
    EmploymentList employmentList;

public:
    void setNormalMember(NormalMember normalMember);
    void setEmploymentList(EmploymentList employmentList);
    NormalMember getNormalMember();
    EmploymentList getEmploymentList();

    static Application applyTo(NormalMember normalMember, EmploymentList employmentList);

    static vector<Application>* getApplications();

    static Application deleteApplication(int number, string id);
};

#endif
