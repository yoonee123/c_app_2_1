// 실수 2개를 입력 받아 정수 값만의 곱을 구하시오.
// ex) 5.3과 2.7 입력 => 5 * 2 = 10
#include <stdio.h>
void main3()
{
	double a, b;
	printf("실수 2개를 입력하세요.\n");
	scanf_s("%lf %lf", &a, &b);
	int hap = (int)a * (int)b;
	printf("두 실수의 정수 값만의 곲은 : %d", hap);
}
// 형변환 하는 방법은 변수앞에 (자료형) 써주면 됨