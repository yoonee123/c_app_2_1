// 입력한 거스름돈(만원 미만, 최소 단위 백원)을 큰 돈 단위부터 개수를 말하시오.
// (가령 9700원이면 5000원 1개, 1000원 4개, 500원 1개, 100원 2개)
#include <stdio.h>
void main()
{
	int mon, mod = 0;
	printf("거슬러 받을 돈을 입력하세요 : ");
	scanf_s("%d", &mon);
	mod = mon / 5000;
	printf("5000원권 %d개\n", mod);
	mon = mon % 5000;
	mod = mon / 1000;
	printf("1000원권 %d개\n", mod);
	mon = mon % 1000;
	mod = mon / 500;
	printf("500원권 %d개\n", mod);
	mon = mon % 500;
	mod = mon / 100;
	printf("100원권 %d개\n", mod);
}