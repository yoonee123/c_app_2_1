// �Է��� ���� �̻��� �Ҽ�(prime number)�� �ϳ� ����ϰ�, 
// �ݺ��Ͽ� ���� �Է��� ��ٸ��� �Ͻÿ�. 0 �Ǵ� ������ �Է��ϸ� �����Ͻÿ�.
// (9�Է��ϸ� 11���, 13�Է��ϸ� 13���, ��, 0�Է��ϸ� ����!)
#include <stdio.h>
void main()
{
	for (;;)
	{
		int a = 0;
		int i, num;
		printf("������ �ϳ� �Է��ϼ��� : ");
		scanf_s("%d", &num);
		for (;;) 
		{
			for (i = 1; i <= num; i++)
			{
				if (num % i == 0)
					a++;
			}
			if (a == 2)
			{
				printf("�Է��� ���� �̻��� �Ҽ��� : %d\n", num);
				break;
			}
			else
			{
				num++;
				a = 0;
			}	
		}	
		if (num <= 0)
		break;
	}
}