// 학생의 "이름, 과목명1, 평점, 과목명2, 평점, 과목명3, 평점" 등 7개의 멤버를 가지는
// 구조체를 정의하고, 이 구조체의 포인터를 인자로 하여 평점평균을 구해주는 함수를
// 작성하고, 호출 해 보시오.
#include <stdio.h>
struct info {
	char name[12];
	char sub1[20];
	double point1;
	char sub2[20];
	double point2;
	char sub3[20];
	double point3;
};
typedef struct info info;
double avgfunc(info* p)
{
	return (p->point1 + p->point2 + p->point3) / 3.0;
}
void main2()
{
	info stu = { "홍길동", "C", 4.5, "Java", 3.5, "Python", 4.0 };
	double avg = avgfunc(&stu);
	printf("평점 평균 : %.2lf", avg);
}