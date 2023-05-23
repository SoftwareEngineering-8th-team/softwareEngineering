#include "file.h"
#include "Session.h"
#include "Application.h"
#include <vector>
#include <string>
#include <algorithm>

#ifndef __APPLICATIONQUERY__
#define __APPLICATIONQUERY__
using namespace std;

class ApplicationQuery{
public:
    vector<Application> getApplications();
};

class ApplicationQueryUI{
private:
    ApplicationQuery* applicationQuery = new ApplicationQuery();
public:
    void getApplications();
};


#endif