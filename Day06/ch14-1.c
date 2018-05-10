#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *out;
	//out = fopen("text.txt", "r");
	fopen_s(&out,"text.txt", "r");
	if (out == NULL) {
		printf("파일이 없음 \n");
		return 0;
	}
	printf("파일 개방 성공 \n");
	fclose(out);
	return 0;
}