//strcpy()를 사용하지 않고 문자열을 복사하는 함수를 구현하시오

#include<stdio.h>
int main() {
	char *origin = "abcde";
	char copy;
	char *p = &copy;
	MyCopy(copy, origin);

	printf("origin 값 : %s\n", origin);
	printf("복사한 값 : %s\n", copy);

}

void MyCopy(char *str, char origin[]) {
	char *p = &str;
	*p = origin;
}