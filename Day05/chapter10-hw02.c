//strcpy()�� ������� �ʰ� ���ڿ��� �����ϴ� �Լ��� �����Ͻÿ�

#include<stdio.h>
int main() {
	char *origin = "abcde";
	char copy;
	char *p = &copy;
	MyCopy(copy, origin);

	printf("origin �� : %s\n", origin);
	printf("������ �� : %s\n", copy);

}

void MyCopy(char *str, char origin[]) {
	char *p = &str;
	*p = origin;
}