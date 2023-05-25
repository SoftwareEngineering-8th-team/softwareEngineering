#include <vector>
#include <unordered_map>
#include "Application.h"
#include "NormalMember.h"
#include "Session.h"
#include "file.h"
#ifndef __NORMALSTATISTICQUERY__
#define __NORMALSTATISTICQUERY__

using namespace std;

/*
	클래스 이름 : NormalStatisticQuery
	기능 : 일반 회원이 본인이 지원한 정보를 출력하는 클래스
*/
class NormalStatisticQuery{
public:
    unordered_map<string,int> calculateStatistic();
};

/*
	클래스 이름 : NormalStatisticQueryUI
	기능 : 일반 회원이 본인이 지원한 정보를 출력하는 UI를 나타내는 클래스
*/
class NormalStatisticQueryUI{
private:
    NormalStatisticQuery* normalStatisticQuery = new NormalStatisticQuery();

public:
     void checkStatistic();
};










#endif