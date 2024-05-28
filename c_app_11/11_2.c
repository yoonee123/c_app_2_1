// 문자열을 입력 받아(gets() 이용), 3 글자씩 잘라 각각 새 라인에 출력하시오.
#include <stdio.h>
void main2()
{
	char s[100];
	int i = 0;

	printf("문자열을 입력하세요 : ");
	gets_s(s, 100);
	while (s[i])
	{
		printf("%c", s[i]);
		i++;
		if (i % 3 == 0)
		{
			printf("\n");
		}
	}
}
