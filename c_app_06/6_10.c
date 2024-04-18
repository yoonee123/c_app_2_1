#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
void my_Strcat(char*, char*);
void main10()
{
	char str1[20] = "Manny";
	char str2[20] = " machado";

	printf("첫번 째 문자열 : %s, 두번째 문자열 : %s\n", str1, str2);

	my_Strcat(str1, str2);

	printf("두번 째 문자열: %s, 합친 문자열 : %s\n", str2, str1); //함수 호출 후
	return 0;
}
void my_Strcat(char* D, char* S)
{
	strcat(D, S);
}