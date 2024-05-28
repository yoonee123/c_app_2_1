// 입력 받은 문자열에서 맨 가운데 문자를 출력하시오.(길이가 짝수면 2개 출력)
#include <stdio.h>
#include <string.h>
void main4()
{
	char s[100];
	int len;

	printf("문자열을 입력하세요 : ");
	gets_s(s, 100);

	len = strlen(s);
	if (len % 2 == 1)
	{
		printf("%c\n", s[len / 2]);
	}
	else
	{
		printf("%c%c\n", s[(len / 2) - 1], s[len / 2]);
	}
}