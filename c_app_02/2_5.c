// 몸무게와 키를 입력 받아 bmi를 계산하시오.
// 단, bmi는 몸무게 / 키의제곱 
// ex) bmi = 55/165제곱 = 20.2
#include <stdio.h>
void main5()
{
	double h, w, bmi;
	printf("키(m)와 몸무게(kg)를 입력하십시오.\n");
	scanf_s("%lf %lf", &h, &w);
	h = h / 100;
	h = h * h;
	bmi = w / h;
	printf("당신의 bmi는 : %.1lf", bmi);
}