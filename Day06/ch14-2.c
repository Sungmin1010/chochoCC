#include<stdio.h>
int main() {
	FILE *out;
	int i, c;
	char temp[80];
	fopen_s(&out, "text.txt", "w");
	printf(": \n");
	fflush(stdout);  //clear buffer
	gets_s(temp, sizeof(temp));
	printf("¹ÞÀº °ª%s", temp);
	for (i = 0; temp[i]; i++)
		fputc(temp[i], out);
	fclose(out);	//close file


	fopen_s(&out, "text.txt", "r");
	while ((c = fgetc(out)) != EOF) {
		putchar(c);
	}
	fclose(out);
	return 0;

}