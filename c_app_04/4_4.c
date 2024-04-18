// 오늘 10원, 내일 20원, 모레 40원, … 
// 매일 두 배씩 저금통에 모을 때 모두 합한 총액이 1억원이 넘는 날은 몇 일째인지 코딩해 보시오. 
#include <stdio.h>
void main4()
{
	int i, sum = 0, day = 0;
	for (i = 10; ; i = i * 2)
	{
		sum = sum + i;
		day++;
		printf("%d일 저금한 돈 : %d\n", day, sum);
		if (sum >= 100000000)
			break;
	}
	printf("1억원을 넘긴 날은 : %d일", day);
}