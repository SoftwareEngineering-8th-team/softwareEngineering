#include "file.h"
#include "Session.h"
#include "Application.h"
#include <vector>
#include <string>
#include <algorithm>

#ifndef __APPLICATIONQUERY__
#define __APPLICATIONQUERY__
using namespace std;

/*
    클래스 이름 : ApplicationQuery
    기능 : 지원정보 조회 컨트롤 클래스
*/
class ApplicationQuery{
public:
    vector<Application> getApplications();
};

/*
    클래스 이름 : ApplicationQueryUI
    기능 : 지원정보 조회 바운더리 클래스
*/
class ApplicationQueryUI{
private:
    ApplicationQuery* applicationQuery = new ApplicationQuery();
public:
    void getApplications();
};


#endif