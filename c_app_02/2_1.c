// �ؿ��� �������� ���̸� �Է¹޾� ������� ���Ǹ� ���Ͻÿ�.
// ��, �����ִ� ��ũ�� volume(x,y)�� ����ÿ�. (�������� x�̰� ���̰� y�� ������Ǻ���)
#include <stdio.h>
#define volume(x, y) (3.14 * (x) * (x) * (y))
void main1()
{
	double r, h, w;
	printf("�ؿ��� �������� ���̸� �Է��ϼ��� : ");
	scanf_s("%lf %lf", &r, &h);
	w = volume(r, h);
	printf("������� ���Ǵ� %.3lf", w);
}