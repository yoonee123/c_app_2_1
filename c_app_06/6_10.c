#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
void my_Strcat(char*, char*);
void main10()
{
	char str1[20] = "Manny";
	char str2[20] = " machado";

	printf("ù�� ° ���ڿ� : %s, �ι�° ���ڿ� : %s\n", str1, str2);

	my_Strcat(str1, str2);

	printf("�ι� ° ���ڿ�: %s, ��ģ ���ڿ� : %s\n", str2, str1); //�Լ� ȣ�� ��
	return 0;
}
void my_Strcat(char* D, char* S)
{
	strcat(D, S);
}