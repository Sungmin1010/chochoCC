#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "My name is Hong, Gil-Dong";
	char *ch1, *ch2;

	ch1 = strchr(str, 'n'); //ù��° �߰��� ��ġ
	ch2 = strrchr(str, 'n'); //���������� �߰��� ��ġ

	printf("ù��° �߰��� 'n'������ ��ġ : %d\n", ch1 - str + 1);  //4
	printf("������ �߰��� 'n'������ ��ġ : %d\n", ch2 - str + 1);  //24
	return 0;
}