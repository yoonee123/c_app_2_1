// 전역변수를 하나 선언하고 그 전역변수 값만큼 “Hello”를 여러 번 출력하는 함수를 만드시오.
// main()에서 그 전역변수 값을 입력한 후, 함수호출하시오.
#include <stdio.h>
int local = 10;
void prn_hello();

void main1()
{
	prn_hello();
}
void prn_hello()
{
	for (int i = 0; i < local; i++)
	{
		printf("hello\n");
	}
	return 0;
}