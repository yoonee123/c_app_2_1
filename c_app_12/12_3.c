// 삼각형의 세변을 멤버로 가지는 구조체를 정의하고, 
// 삼각형의 면적을 구해주는 함수를 만들어 보시오.
// (면적은 s＝(a＋b＋c)/2 )
#include <stdio.h>
struct info {
	double a;
	double b;
	double c;
};
typedef struct info info;
double triangle(info* p)
{
	return (p->a + p->b + p->c) / 2;
}
void main3()
{
	info hap = { 3, 3, 3 };
	double avg = triangle(&hap);
	printf("삼각형의 면적은 : %.2lf", avg);
}