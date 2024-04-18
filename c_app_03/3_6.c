// 지하철 이용거리를 입력받아 요금을 계산하시오. 
// 10km 이내면 1400원, 10~50km : 5km마다 100원 추가, 50km 초과시 8km마다 100원 추가 
#include <stdio.h>
void main6()
{
	int dis, hap = 1400;
	printf("지하철 이용거리를 입력하세요 : ");
	scanf_s("%d", &dis);
	if (dis <= 10)
		printf("요금은 %d원\n", hap);
	else if (dis > 10 && dis <= 50)
	{
		hap = hap + (dis - 10) / 5 * 100;
		printf("요금은 %d원\n", hap);
	}
	else if (dis > 50)
	{
		hap = 2200;
		hap = hap + (dis - 50) / 8 * 100;
		printf("요금은 %d원\n", hap);
	}
}