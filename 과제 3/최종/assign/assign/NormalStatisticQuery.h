#include <vector>
#include <unordered_map>
#include "Application.h"
#include "NormalMember.h"
#include "Session.h"
#include "file.h"
#ifndef __NORMALSTATISTICQUERY__
#define __NORMALSTATISTICQUERY__
using namespace std;

class NormalStatisticQuery{
public:
    unordered_map<string,int> calculateStatistic();
};

class NormalStatisticQueryUI{
private:
    NormalStatisticQuery* normalStatisticQuery = new NormalStatisticQuery();

public:
     void checkStatistic();
};










#endif