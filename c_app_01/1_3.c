// 1000만원을 예탁하여 2년후 받게되는 총액을 계산하시오. (연이율은 4%)
#include <stdio.h>
void main3()
{
   // 초기 투자 금액 설정
	int money = 10000000;
	double e = 0.04;

	int total1 = money + money * e;
	printf("1년 후 받게되는 총액은 %d원입니다.\n", total1);
	int total2 = total1 + total1 * e;
	printf("2년 후 받게되는 총액은 %d원입니다.", total2);
}
