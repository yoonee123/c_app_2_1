// ȭ�� 90���� ���� ������� ���Ͻÿ�. C=(F-32)/1.8
#include <stdio.h>
void main1() 
{
	int f = 90;
	double c;

	c = (f - 32) / 1.8;
	printf("ȭ�� %d���� ���� %lf�� �Դϴ�.", f, c);
}