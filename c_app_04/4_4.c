// ���� 10��, ���� 20��, �� 40��, �� 
// ���� �� �辿 �����뿡 ���� �� ��� ���� �Ѿ��� 1����� �Ѵ� ���� �� ��°���� �ڵ��� ���ÿ�. 
#include <stdio.h>
void main4()
{
	int i, sum = 0, day = 0;
	for (i = 10; ; i = i * 2)
	{
		sum = sum + i;
		day++;
		printf("%d�� ������ �� : %d\n", day, sum);
		if (sum >= 100000000)
			break;
	}
	printf("1����� �ѱ� ���� : %d��", day);
}