#include <stdio.h>

typedef struct f_riend {
	char name[20];
	char phoneno[20];
	int age;
} FRIEND;

void showmenu() {
	printf("�޴��� �����Ͻÿ�. \n");
	printf("1. ģ�� ���� �Է� \n");
	printf("2. ģ�� �̸����� �˻� \n");
	printf("3. ���Ϸ� ����\n");
	printf("4. ����. \n");
}

void insert_friend(FRIEND *f_list, int *pcnt) {
	int cnt = *pcnt;
	printf("�̸��� �Է��Ͻÿ�.\n");
	scanf_s("%s", f_list[cnt].name, sizeof(f_list[*pcnt].name));

	printf("��ȭ��ȣ�� �Է��Ͻÿ�.\n");
	scanf_s("%s", f_list[cnt].phoneno, sizeof(f_list[cnt].phoneno));

	printf("���̸� �Է��Ͻÿ�.\n");
	scanf_s("%d", &f_list[cnt].age, sizeof(f_list[cnt].age));

	(*pcnt)++;

}

void search_friend(FRIEND *f_list, int *pcnt) {
	char s_name[20];
	printf("�˻��� �̸��� �Է��Ͻÿ�. \n");
	scanf_s("%s", s_name, sizeof(s_name));

	for (int i = 0; i < *pcnt; i++) {
		if (!strcmp(s_name, f_list[i].name)) {
			printf("�̸� : %s \n", f_list[i].name);
			printf("��ȭ��ȣ : %s \n", f_list[i].phoneno);
			printf("���� : %d \n", f_list[i].age);
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
		fclose(out);  //�ϴ� ���� �ݾ�
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
				printf("�ùٸ� �޴��� �����Ͻÿ�.");
			}
		}
	}
	else {
		//������ �о �迭�� �����

		fclose(out);

	}
	

	return;
}