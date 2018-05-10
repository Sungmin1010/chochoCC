#include<stdio.h>
int main() {
	char name[80];
	int data;
	FILE *handle;
	printf("이름을 입력하세요 : ");
	fflush(stdout);						//clear buffer
	scanf_s("%s", name, sizeof(name));
	printf("번호를 입력하세요 : ");
	fflush(stdout);						//clear buffer
	scanf_s("%d", &data);
	fopen_s(&handle, "test.dat", "wb");  //open file 
	fwrite((char *)name, 80, 1, handle); 
	fwrite((char *)&data, sizeof(4), 1, handle);
	fclose(handle);						//close file


	fopen_s(&handle, "test.dat", "rb");	//open file with read mode
	fread((char *)name, 80, 1, handle);
	fread((char *)&data, sizeof(data), 1, handle);
	printf("%s\n", name);
	printf("%d\n", data);
	fclose(handle);
	return 0;

}