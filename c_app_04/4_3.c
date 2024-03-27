// 서기 1년부터 입력받은 해까지의 윤년 개수를 구하시오.
#include <stdio.h>
void main3()
{
	int y, cnt = 0;
	printf("해를 입력하세요 : ");
	scanf_s("%d", &y);
	for (int i = 1;i <= y; i++)
	{
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
			cnt++;
	}
	printf("%d", cnt);
}