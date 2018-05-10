#include <stdio.h>
int main() {
	long cp;
	char ch;
	FILE *p;
	fopen_s(&p, "a.txt", "r+t");
	if (p == NULL) {
		printf("파일 없음\n");
		return 0;
	}

	fseek(p, 3, SEEK_SET);
	ch = fgetc(p);
	cp = ftell(p);
	printf("%c,%ld\n", ch, cp);
	fseek(p, -5, SEEK_END);
	ch = fgetc(p);
	cp = ftell(p);
	printf("%c,%ld\n", ch, cp);
	return 0;
}