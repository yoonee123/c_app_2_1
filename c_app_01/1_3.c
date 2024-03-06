// 1000만원을 예탁하여 2년후 받게되는 총액을 계산하시오. (연이율은 4%)
#include <stdio.h>
void main()
{
	int m = 10000000;
	double e = 0.04;
	int c;
	 
	c = m * ((1 + e) * (1 + e));

	printf("2년후 받게되는 총액은 %d입니다.\n", c);

	int money = 10000000;
	int total1, total2;

	total1 = money + money * 0.04;
	total2 = total1 + total1 * 0.04;

	printf("2년후 받게되는 총액은 %d입니다.", total2);
}
