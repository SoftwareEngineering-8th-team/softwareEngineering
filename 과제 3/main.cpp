// 헤더 선언
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include "User.h"
#include "SignUpUI.h"
#include "SignUp.h"
#include "SignOutUI.h"
#include "SignOut.h"
#include "LoginUI.h"
#include "Login.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

// 함수 선언
void doTask();
void join();
void program_exit();

// 변수 선언
FILE* in_fp, *out_fp;

vector <User> user; //전체 회원 리스트
User* nowUser = new User(); //현재 로그인한 회원


int main()
{
	in_fp = fopen(INPUT_FILE_NAME, "r+");
	out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	doTask();

	return 0;
}

void doTask() {

	// 메뉴 파싱을 위한 level 구분을 위한 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit) {
		// 입력파일에서 메뉴 숫자 2개를 읽기
		fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);

		// 메뉴 구분 및 해당 연산 수행
		switch (menu_level_1) {
		case 1: {
			switch (menu_level_2) {
			case 1: {  // 1.1 회원가입
				SignUpUI* signUpUI = new SignUpUI();
				
				break;
			}
			case 2: {  // 1.2 회원탈퇴
				SignOutUI* signOutUI = new SignOutUI();
				;
				break;
			}
			}
			break;
		}
		case 2: {
			switch (menu_level_2) {
			case 1: {  // 2.1 로그인
				LoginUI* loginUI = new LoginUI();
				
				break;
			}
			case 2: {  // 2.2 로그아웃
				LogoutUI* logoutUI = new LogoutUI();
				
				break;
			}
			}
			break;
		}
		case 3: {
			switch (menu_level_2) {
			case 1: {  
				break;
			}
			case 2: {  
			}
			case 3: {  
				break;
			}
			}
			break;
		}
		case 4: {
			switch (menu_level_2) {
			case 1: {  
				break;
			}
			case 2: {    
				break;
			}
			case 3: {  
				break;
			}
			case 4: {   
				break;
			}
			}
			break;
		}
		case 5: {
			switch (menu_level_2) {
			case 1: {  
				
				break;
			}
			}
			break;
		}
		case 6: {
			// 6.1 종료 
			program_exit();
			is_program_exit = 1;
			break;
		}
		}
		fprintf(out_fp, "\n");
	}
}


void program_exit() {
	fprintf(out_fp, "6.1. 종료");
}
