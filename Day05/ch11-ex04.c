#include<stdio.h>
struct stu { char name[20];	int grade; int kor; int eng; int mat; float avg;
};

void GetScore(struct stu *p);

int main() {
	struct stu studentlist[2];
//	printf("%d", sizeof(studentlist));

	int i = 0;
	for (i = 0; i < 2; i++) {
		printf("----- %d��° �л� �Է� -----\n", i + 1);
		GetScore(&studentlist[i]);  
		//getchar();
	}
	printf("=======�Է� ����======\n");
	for (i = 0; i < 2; i++) {
		printf("%s\t%d\t%d\t%d\t%d\n", studentlist[i].name, studentlist[i].grade, studentlist[i].kor, studentlist[i].eng, studentlist[i].mat);

		
	}

}

void GetScore(struct stu *p) {
	//gets()
	printf("�̸��� �Է��� �ּ��� : \n");
	scanf_s("%s", &(p->name), sizeof(p->name));
	//gets_s(p->name, sizeof(p->name));

	printf("�г��� �Է��� �ּ���(1~4) : \n");
	scanf_s("%d", &(p->grade));

	printf("����������? \n");
	scanf_s("%d", &(p->kor));

	printf("����������? \n");
	scanf_s("%d", &(p->eng));

	printf("����������? \n");
	scanf_s("%d", &(p->mat));

}


