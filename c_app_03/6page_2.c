//�Ǽ� �ΰ��� �Է��ϰ� ������� ��ȣ�� �����ѵ�, ����Ͻÿ�.
#include <stdio.h>
void main6_2()
{
	double n1, n2;
	printf("�Ǽ� �� ���� �Է��ϼ���. : ");
	scanf_s("%lf %lf", &n1, &n2);
	int n;
	printf("������� ��ȣ�� �Է��ϼ���. 1(+), 2(-), 3(*), 4(/) : ");
	scanf_s("%d", &n);
	double hap;
	if (n == 1)
	{
		hap = n1 + n2;
		printf("%.3lf + %.3lf�� %.3lf", n1, n2, hap);
	}
	else if (n == 2)
	{
		hap = n1 - n2;
		printf("%.3lf - %.3lf�� %.3lf", n1, n2, hap);
	}
	else if (n == 3)
	{
		hap = n1 * n2;
		printf("%.3lf * %.3lf�� %.3lf", n1, n2, hap);
	}
	else if (n == 4)
	{
		hap = n1 / n2;
		printf("%.3lf / %.3lf�� %.3lf", n1, n2, hap);
	}
	else
	{
		printf("�ùٸ� ���� �Է��ϼ���.");
	}
}