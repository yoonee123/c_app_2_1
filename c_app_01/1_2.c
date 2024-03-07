// 원주율을 매크로상수로 선언하고 반지름(6400km)을 
// const상수로 선언하여 지구의 둘레길이를 구하시오.
#define PI 3.14
#include <stdio.h>
void main2()
{
	const int R = 6400;
	double dule;

	dule = 2 * PI * R;
	printf("지구의 둘레는 %lfKm입니다.", dule);
	// 소수점 자릿수 표현하려면 ex) %.1lf
}
