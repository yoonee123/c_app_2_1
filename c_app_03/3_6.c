// ����ö �̿�Ÿ��� �Է¹޾� ����� ����Ͻÿ�. 
// 10km �̳��� 1400��, 10~50km : 5km���� 100�� �߰�, 50km �ʰ��� 8km���� 100�� �߰� 
#include <stdio.h>
void main6()
{
	int dis, hap = 1400;
	printf("����ö �̿�Ÿ��� �Է��ϼ��� : ");
	scanf_s("%d", &dis);
	if (dis <= 10)
		printf("����� %d��\n", hap);
	else if (dis > 10 && dis <= 50)
	{
		hap = hap + (dis - 10) / 5 * 100;
		printf("����� %d��\n", hap);
	}
	else if (dis > 50)
	{
		hap = 2200;
		hap = hap + (dis - 50) / 8 * 100;
		printf("����� %d��\n", hap);
	}
}