// 상속액을 입력 받아 상속세 계산하기
// (단, 1억 원까지는 10 %, 1억~5억 원 20 %, 5억~10억 원 30 %, 10억~30억 원 40 %, 30억 원 이상 분은 50 % 임.
// (예) 1억3천만원이면 상속세는 1억 * 10 % + 3천만 * 20 % = 1600 만원임)
#include <stdio.h>
void main()
{
	long int mon, tax;
	printf("상속액을 입력하세요 : ");
	scanf_s("%d", &mon);

	if (mon == 100000000)
	{
		tax = mon / 10;
		printf("%d", tax);
	}
	else if (mon > 100000000 && mon < 500000000)
	{
		mon -= 100000000;
		tax = mon / 20;
		tax = tax + 10000000;
		printf("%d", tax);
	}
}