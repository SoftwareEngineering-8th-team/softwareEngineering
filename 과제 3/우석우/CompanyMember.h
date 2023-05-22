#include "Member.h"
#include <string>
#include <vector>
#include <algorithm>
#include "file.h"
#ifndef __COMPANYMEMBER__
#define __COMPANYMEMBER__
using namespace std;

class CompanyMember : public Member {
private:
    static vector<CompanyMember> companyMembers;

public:
    static CompanyMember newMember(string companyName, int businessNumber, string id, string password);
    static vector<CompanyMember>* getCompanyMembers();
    static void deleteMember(string id);
};

#endif