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
	기능 : 일반 회원이 통계 조회하는 컨트롤 클래스
*/
class NormalStatisticQuery{
public:
    unordered_map<string,int> calculateStatistic();
};

/*
	클래스 이름 : NormalStatisticQueryUI
	기능 : 회사 회원이 통계 조회하는 바운더리 클래스
*/
class NormalStatisticQueryUI{
private:
    NormalStatisticQuery* normalStatisticQuery = new NormalStatisticQuery();

public:
     void checkStatistic();
};










#endif