#include<stdio.h>
int main() {
	int ar[2][3] = { {10,20,30},
	{40, 50, 60 } };
	int *p = ar[0];
	int i, j;
	printf("sizeof(ar) = %d\n", sizeof(ar));
	printf("sizeof(ar[0]) = %d\n", sizeof(ar[0]));
	printf("sizeof(ar[0][0]) = %d\n", sizeof(ar[0][0]));
	for (i = 0; i < (sizeof(ar) / sizeof(ar[0])); i++) {  //행반복
		for (j = 0; j < (sizeof(ar[0]) / sizeof(ar[0][0])); j++) {  //열반복
			printf(" %d ", *p);  //p가 참조하고 있는 값을 리턴, 
			p++;				//p의 값을 기준단위 증가
		}
		printf("\n");
	}
	printf("포인터 돌리기 전 : %p\n", p);
	p -= 6;
	printf("포인터 돌린 후 : %p\n", p);
	printf("=================================\n");
	for (i = 0; i < (sizeof(ar) / sizeof(ar[0])); i++) {  //행반복
		for (j = 0; j < (sizeof(ar[0]) / sizeof(ar[0][0])); j++) {//열반복
			printf( "%d ", *(p+(i+j)) );	//p+(0+0), p+(0+1), p+(0+2), p+(1+0)
		}
		printf("\n");
	}
	return 0;
}