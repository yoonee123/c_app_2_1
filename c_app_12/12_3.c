// �ﰢ���� ������ ����� ������ ����ü�� �����ϰ�, 
// �ﰢ���� ������ �����ִ� �Լ��� ����� ���ÿ�.
// (������ s��(a��b��c)/2 )
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
	printf("�ﰢ���� ������ : %.2lf", avg);
}