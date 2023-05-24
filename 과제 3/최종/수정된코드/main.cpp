#include "Session.h"
#include "file.h"
#include "Application.h"
#include "NormalSignUp.h"
#include <iostream>
#include "ApplicationQuery.h"
#include "ApplyCancel.h"
#include "CompanyMember.h"
#include "CompanySignUp.h"
#include "CompanyStatisticQuery.h"
#include "EmploymentApply.h"
#include "EmploymentList.h"
#include "EmploymentRegister.h"
#include "EmploymentQuery.h"
#include "Login.h"
#include "Logout.h"
#include "Member.h"
#include "NormalMember.h"
#include "NormalStatisticQuery.h"
#include "Signout.h"
#include <locale.h>
#include <string>
using namespace std;
void doTask();

int main(){
    g_loginInfo.id="";
    g_loginInfo.isCompany=false;
    g_loginInfo.member=NULL;
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    setlocale(LC_ALL, "ko_KR.UTF-8");
    doTask();

    return 0;
}

void doTask(){
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    NormalSignUpUI normalSignUpUI;
    CompanySignUpUI companySignUpUI;
    SignoutUI signoutUI;
    LoginUI loginUI;
    LogoutUI logoutUI;
    EmploymentRegisterUI employmentRegisterUI;
    EmploymentQueryUI employmentQueryUI;
    EmploymentApplyUI employmentApplyUI;
    ApplicationQueryUI applicationQueryUI;
    ApplyCancelUI applicationCalcelUI;
    NormalStatisticQueryUI normalStatisticQueryUI;
    CompanyStatisticQueryUI companyStatisticQueryUI;

    while (!is_program_exit){
   
        fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);
        switch (menu_level_1){
            case 1:
                switch (menu_level_2){
                    case 1:
                    {
                        int menu_level_3 = 0;
                        char name[50];
                        int number = 0;
                        char id[50];
                        char password[50];
                        fscanf(in_fp, " %d %s %d %s %s", &menu_level_3, name, &number, id, password);
                        if (menu_level_3 == 1){
                            companySignUpUI.signUp(string(name), number, string(id), string(password));
                        }
                        else{
                            normalSignUpUI.signUp(name, number, id, password);
                        }
                        break; // case 1: internal switch statement end
                    }
                    case 2:
                    {
                        signoutUI.signout();
                        break; // case 2: internal switch statement end
                    }
                }
                break; // case 1: external switch statement end
            case 2:
                switch (menu_level_2){
                    case 1: 
                    {
                        char id[50];
                        char password[50];
                        fscanf(in_fp,"%s %s",id,password);
                        
                        loginUI.login(string(id),string(password));
                        break;
                    }
                    case 2:
                    {
                        logoutUI.logout();
                        break;
                    }
                }
                break;
            case 3:
                switch (menu_level_2){
                    case 1:
                    {
                        char work[50];
                        int count=0;
                        char dueDate[50];
                        fscanf(in_fp,"%s %d %s",work,&count,dueDate);
                        employmentRegisterUI.registerApply(string(work),count,string(dueDate));
                        break;

                    }
                    case 2:
                    {
                        employmentQueryUI.serachInfo();
                        break;
                    }
                }
                break;
            case 4:
                switch (menu_level_2){
                    case 1: 
                    {
                        char companyName[50];
                        fscanf(in_fp,"%s",companyName);
                        employmentApplyUI.searchByName(string(companyName));
                        break;
                    }
                    case 2:
                    {
                        int businessNum=0;
                        fscanf(in_fp,"%d",&businessNum);
                        employmentApplyUI.applyTo(businessNum);
                        break;
                    }
                    case 3:
                    {
                        applicationQueryUI.getApplications();
                        break;
                    }
                    case 4:
                    {
                        int businessNum=0;
                        fscanf(in_fp,"%d",&businessNum);
                        applicationCalcelUI.cancelApply(businessNum);
                        break;
                    }

                }
                break;
            case 5:
                switch(menu_level_2){
                    case 1:
                    {
                        if(g_loginInfo.isCompany==true){
                            companyStatisticQueryUI.checkStatistic();
                        }
                        else{
                            normalStatisticQueryUI.checkStatistic();
                        }
                        break;
                    }
                }
                break;
            case 6:
                if (menu_level_2 == 1){
                    is_program_exit = 1;
                    fprintf(out_fp,"6.1. 종료");
                }
                break; // case 6: external switch statement end
        }

        // Termination condition
        if (menu_level_1 == 6 && menu_level_2 == 1){
            is_program_exit = 1;
        }
    }
}
