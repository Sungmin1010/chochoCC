#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *out;
	//out = fopen("text.txt", "r");
	fopen_s(&out,"text.txt", "r");
	if (out == NULL) {
		printf("������ ���� \n");
		return 0;
	}
	printf("���� ���� ���� \n");
	fclose(out);
	return 0;
}