// ��� ����
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

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

// �Լ� ����
void doTask();
void join();
void program_exit();

// ���� ����
FILE* in_fp, *out_fp;

vector <User> user; //��ü ȸ�� ����Ʈ
User* nowUser = new User(); //���� �α����� ȸ��


int main()
{
	in_fp = fopen(INPUT_FILE_NAME, "r+");
	out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	doTask();

	return 0;
}

void doTask() {

	// �޴� �Ľ��� ���� level ������ ���� ����
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit) {
		// �Է����Ͽ��� �޴� ���� 2���� �б�
		fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);

		// �޴� ���� �� �ش� ���� ����
		switch (menu_level_1) {
		case 1: {
			switch (menu_level_2) {
			case 1: {  // 1.1 ȸ������
				SignUpUI* signUpUI = new SignUpUI();
				signUpUI->signUp(in_fp, out_fp, user);
				break;
			}
			case 2: {  // 1.2 ȸ��Ż��
				SignOutUI* signOutUI = new SignOutUI();
				signOutUI->signOut(out_fp, user, nowUser, nowUserIndex);
				break;
			}
			}
			break;
		}
		case 2: {
			switch (menu_level_2) {
			case 1: {  // 2.1 �α���
				LoginUI* loginUI = new LoginUI();
				loginUI->login(in_fp, out_fp, user, nowUser, nowUserIndex);
				break;
			}
			case 2: {  // 2.2 �α׾ƿ�
				LogoutUI* logoutUI = new LogoutUI();
				logoutUI->logout(out_fp, nowUser);
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
			// 6.1 ���� 
			program_exit();
			is_program_exit = 1;
			break;
		}
		}
		fprintf(out_fp, "\n");
	}
}


void program_exit() {
	fprintf(out_fp, "6.1. ����");
}