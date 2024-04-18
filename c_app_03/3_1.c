// 입력받은 문자가 대문자이면 소문자로, 소문자이면 대문자로, 그 외는 그대로 출력하시오.
#include <stdio.h>
void main1()
{
	char c;

	printf("문자를 하나 입력하세요.\n");
	scanf_s("%c", &c, 1);

	if (c >= 'A' && c <= 'Z')
	{
		printf("%c", c + 32); // c + 'a'-'A'
	}
	else if (c >= 'a' && c <= 'z')
	{
		printf("%c", c - 32);
	}
	else
	{
		printf("%c", c);
	}
}