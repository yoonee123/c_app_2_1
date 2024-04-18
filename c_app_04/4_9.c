// 입력한 정수 이상의 소수(prime number)를 하나 출력하고, 
// 반복하여 다음 입력을 기다리게 하시오. 0 또는 음수를 입력하면 종료하시오.
// (9입력하면 11출력, 13입력하면 13출력, …, 0입력하면 종료!)
#include <stdio.h>
void main()
{
	for (;;)
	{
		int a = 0;
		int i, num;
		printf("정수를 하나 입력하세요 : ");
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
				printf("입력한 정수 이상의 소수는 : %d\n", num);
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