//입력한 정수를 거꾸로 입력하세요
#include <stdio.h>
 
void main10()
{
	int num;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);
 
	do
	{
		printf("%d", num % 10);
		num /= 10;
	} while (num != 0);	
}