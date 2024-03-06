// 화씨 90도는 섭씨 몇도인지를 구하시오. C=(F-32)/1.8
#include <stdio.h>
void main1() 
{
	int f = 90;
	double c;

	c = (f - 32) / 1.8;
	printf("화씨 %d도는 섭씨 %lf도 입니다.", f, c);
}