#include <stdio.h>

void main() {

	FILE *input;
	fopen_s(&input, "input.txt", "rt");

	FILE *output;
	fopen_s(&output, "output.txt", "wt");

	char name[50];    // �̸�
	int num1, num2, num3;  // ����1, ����2, ����3
	int sum;      // �հ�
	double avg;      // ���
	int c;

	printf("�̸�\t����\t���\n");
	printf("===========================\n");

	fprintf(output, "�̸�\t����\t���\n");
	fprintf(output, "===========================\n");

	if (NULL != input) {
		while ((c = fgetc(input) != EOF)) {  //(c = fgetc(input) != EOF)
			fscanf_s(input, "%s %d %d %d\n", name, sizeof(name), &num1, &num2, &num3);
			sum = num1 + num2 + num3;
			avg = sum / 3;
			printf("%s\t%d\t%.2f\n", name, sum, avg);
			fprintf(output, "%s\t%d\t%.f\n", name, sum, avg);
		}
		
	
		
		

		

		
		
	}
	fclose(input);
	fclose(output);
}