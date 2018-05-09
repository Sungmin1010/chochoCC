#include<stdio.h>
struct stu {
	char name[20];
	int grade;
	int kor;
	int eng;
	int mat;
	float avg;
};

void GetScore(struct stu *p);
void GetAvg(struct stu *p);

int main() {
	struct stu student01;
	GetScore(&student01);
	printf("=======입력 정보======\n%s\t%d\t%d\t%d\t%d\n", student01.name, student01.grade, student01.kor, student01.eng, student01.mat);
	GetAvg(&student01);
	printf("학생의 평균은 : %f", student01.avg);
	return 0;


}

void GetScore(struct stu *p) {
	//gets()
	printf("이름을 입력해 주세요 : \n");
	gets_s(p->name, sizeof(p->name));

	printf("학년을 입력해 주세요(1~4) : \n");
	scanf_s("%d",&(p->grade));

	printf("국어점수는? \n");
	scanf_s("%d", &(p->kor));

	printf("영어점수는? \n");
	scanf_s("%d", &(p->eng));

	printf("수학점수는? \n");
	scanf_s("%d", &(p->mat));

}

void GetAvg(struct stu *p) {
	int kor = p->kor;
	int mat = p->mat;
	int eng = p->eng;

	p->avg = (kor + mat + eng) / 3.0;
	
}