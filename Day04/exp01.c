#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "My name is Hong, Gil-Dong";
	char *ch1, *ch2;

	ch1 = strchr(str, 'n'); //첫번째 발견한 위치
	ch2 = strrchr(str, 'n'); //마지막으로 발견한 위치

	printf("첫번째 발견한 'n'문자의 위치 : %d\n", ch1 - str + 1);  //4
	printf("마지막 발견한 'n'문자의 위치 : %d\n", ch2 - str + 1);  //24
	return 0;
}