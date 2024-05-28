// 문자열내의 숫자문자(즉 ‘0’~’9’)의 개수를 알려주는 함수를 만들고, 
// 호출해 보시오.( int cntNumber(char *) )
#include <stdio.h>
int cntNumber(char* p)
{
	int cnt = 0;

	while (*p) 
	{
		if (*p >= '0' && *p <= '9')
		{
			cnt++;
		}
		p++;
	}
	return cnt++;
}
void main1()
{
	char s[100];

	printf("숫자가 포함된 문자열을 입력하세요 : ");
	scanf_s("%s", s, 100);

	printf("숫자의 갯수는 : %d", cntNumber(s));
}
