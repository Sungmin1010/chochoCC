#include<stdio.h>
int main() {
	int ar[2][3] = { {10,20,30},
	{40, 50, 60 } };
	int *p = ar[0];
	int i, j;
	printf("sizeof(ar) = %d\n", sizeof(ar));
	printf("sizeof(ar[0]) = %d\n", sizeof(ar[0]));
	printf("sizeof(ar[0][0]) = %d\n", sizeof(ar[0][0]));
	for (i = 0; i < (sizeof(ar) / sizeof(ar[0])); i++) {  //��ݺ�
		for (j = 0; j < (sizeof(ar[0]) / sizeof(ar[0][0])); j++) {  //���ݺ�
			printf(" %d ", *p);  //p�� �����ϰ� �ִ� ���� ����, 
			p++;				//p�� ���� ���ش��� ����
		}
		printf("\n");
	}
	printf("������ ������ �� : %p\n", p);
	p -= 6;
	printf("������ ���� �� : %p\n", p);
	printf("=================================\n");
	for (i = 0; i < (sizeof(ar) / sizeof(ar[0])); i++) {  //��ݺ�
		for (j = 0; j < (sizeof(ar[0]) / sizeof(ar[0][0])); j++) {//���ݺ�
			printf( "%d ", *(p+(i+j)) );	//p+(0+0), p+(0+1), p+(0+2), p+(1+0)
		}
		printf("\n");
	}
	return 0;
}