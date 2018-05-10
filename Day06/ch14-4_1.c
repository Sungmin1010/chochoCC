#include<stdio.h>
int main() {
	FILE *p;
	int i;
	char alph[] = "ABCDEFGHIGKLMNOPQRSTUVWXYZ";

	fopen_s(&p,"a.txt", "w" );
	for (i = 0; i < alph[i]; i++) {
		fputc(alph[i], p);
	}
	fclose(p);
}