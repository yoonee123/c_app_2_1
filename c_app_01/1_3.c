// 1000������ ��Ź�Ͽ� 2���� �ްԵǴ� �Ѿ��� ����Ͻÿ�. (�������� 4%)
#include <stdio.h>
void main3()
{
   // �ʱ� ���� �ݾ� ����
	int money = 10000000;
	double e = 0.04;

	int total1 = money + money * e;
	printf("1�� �� �ްԵǴ� �Ѿ��� %d���Դϴ�.\n", total1);
	int total2 = total1 + total1 * e;
	printf("2�� �� �ްԵǴ� �Ѿ��� %d���Դϴ�.", total2);
}
