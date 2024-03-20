// 몸무게와 키를 입력하여 BMI를 구하고, 18미만이면 저체중, 18 ~ 25면 정상, 25초과면 과체중을 출력하시오.
#include <stdio.h>
void main5()
{
	double he, we, bmi;
	printf("키와 몸무게를 순서대로 입력하세요.");
	scanf_s("%lf %lf", &he, &we);
	he = he / 100;
	he = he * he;
	bmi = we / he;
	printf("%.3lf", bmi);

	if (bmi < 18)
		printf("저체중");
	else if (bmi > 18 && bmi < 25)
		printf("정상");
	else
		printf("과체중");
}