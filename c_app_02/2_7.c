// 비트논리연산자를 이용하여 입력 받은 문자의 아스키값을 이진수로 출력하시오.
// (가령 ‘A’ 면, 0100 0001 출력)
#include <stdio.h>
void main7()
{
	char ch;
	printf("문자를 하나 입력하십시오.\n");
	scanf_s("%c", &ch, 1);
	printf("문자의 이진수는 : ");
	for (int i = 7; i >= 0; i--)
	{
		printf("%d", ch >> i & 1);
	}
}