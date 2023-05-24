#include "NormalMember.h"
#include "EmploymentList.h"
#ifndef __APPLICATION__
#define __APPLICATION__
#include <vector>
using namespace std;
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

    // 신규 지원서를 생성하여 applications에 추가하는 함수
    static Application applyTo(NormalMember normalMember, EmploymentList employmentList);

    // 현재 저장된 모든 지원서를 반환하는 함수
    static vector<Application>* getApplications();

    // 주어진 번호와 아이디에 해당하는 지원서를 삭제하고 삭제된 지원서를 반환하는 함수
    static Application deleteApplication(int number, string id);
};

#endif
