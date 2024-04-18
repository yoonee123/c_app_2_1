// 밑원의 반지름과 높이를 입력받아 원기둥의 부피를 구하시오.
// 단, 인자있는 매크로 volume(x,y)를 만드시오. (반지름이 x이고 높이가 y인 원기둥의부피)
#include <stdio.h>
#define volume(x, y) (3.14 * (x) * (x) * (y))
void main1()
{
	double r, h, w;
	printf("밑원의 반지름과 높이를 입력하세요 : ");
	scanf_s("%lf %lf", &r, &h);
	w = volume(r, h);
	printf("원기둥의 부피는 %.3lf", w);
}