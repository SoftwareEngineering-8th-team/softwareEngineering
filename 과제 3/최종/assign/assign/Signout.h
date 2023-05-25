#include "NormalMember.h"
#include "CompanyMember.h"
#include "Session.h"
#include "file.h"
#ifndef __SIGNOUT__
#define __SIGNOUT__

/*
  클래스 이름 : Signout
  기능 : 회원탈퇴 컨트롤 클래스
*/
class Signout
{
public:
  string deleteMember();
};

/*
  클래스 이름 : SignoutUI
  기능 : 회원탈퇴 바운더리 클래스
*/
class SignoutUI
{
private:
  Signout *signoutCtrl = new Signout();

public:
  void signout();
};

#endif