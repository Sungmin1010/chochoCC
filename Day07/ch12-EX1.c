#include <stdio.h>

typedef struct f_riend {
	char name[20];
	char phoneno[20];
	int age;
} FRIEND;

void showmenu() {
	printf("메뉴를 선택하시오. \n");
	printf("1. 친구 정보 입력 \n");
	printf("2. 친구 이름으로 검색 \n");
	printf("3. 파일로 저장\n");
	printf("4. 종료. \n");
}

void insert_friend(FRIEND *f_list, int *pcnt) {
	int cnt = *pcnt;
	printf("이름을 입력하시오.\n");
	scanf_s("%s", f_list[cnt].name, sizeof(f_list[*pcnt].name));

	printf("전화번호를 입력하시오.\n");
	scanf_s("%s", f_list[cnt].phoneno, sizeof(f_list[cnt].phoneno));

	printf("나이를 입력하시오.\n");
	scanf_s("%d", &f_list[cnt].age, sizeof(f_list[cnt].age));

	(*pcnt)++;

}

void search_friend(FRIEND *f_list, int *pcnt) {
	char s_name[20];
	printf("검색할 이름을 입력하시오. \n");
	scanf_s("%s", s_name, sizeof(s_name));

	for (int i = 0; i < *pcnt; i++) {
		if (!strcmp(s_name, f_list[i].name)) {
			printf("이름 : %s \n", f_list[i].name);
			printf("전화번호 : %s \n", f_list[i].phoneno);
			printf("나이 : %d \n", f_list[i].age);
		}
	}
}

void save_file(FRIEND *f_list) {
	FILE *save;
	fopen_s(&save, "ex1.txt", "w");
	


}

int main() {
	int menu;
	FRIEND f_list[100];
	int cnt = 0;
	int *pcnt = &cnt;
	FILE *out;
	fopen_s(&out, "ex1.txt", "r");
	if (out == NULL) {
		fclose(out);  //일단 파일 닫어
		while (1) {
			showmenu();
			scanf_s("%d", &menu);

			switch (menu) {
			case 1:
				insert_friend(f_list, pcnt);
				break;
			case 2:
				search_friend(f_list, pcnt);
				break;
			case 3:
				save_file(f_list);
				break;
			case 4:
				return 0;
			default:
				printf("올바른 메뉴를 선택하시오.");
			}
		}
	}
	else {
		//정보를 읽어서 배열로 만들기

		fclose(out);

	}
	

	return;
}