// �л��� "�̸�, �����1, ����, �����2, ����, �����3, ����" �� 7���� ����� ������
// ����ü�� �����ϰ�, �� ����ü�� �����͸� ���ڷ� �Ͽ� ��������� �����ִ� �Լ���
// �ۼ��ϰ�, ȣ�� �� ���ÿ�.
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
	info stu = { "ȫ�浿", "C", 4.5, "Java", 3.5, "Python", 4.0 };
	double avg = avgfunc(&stu);
	printf("���� ��� : %.2lf", avg);
}