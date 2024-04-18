//자연수를 1개 입력 받아, 한 숫자씩 영어로 바꾸어 출력하시오.
//(만일 203 이면, two zero three)
#include <stdio.h>
void main()
{
	char str[10][5] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	int num = 0;
	printf("자연수를 입력하세요 : ");
	scanf_s("%d", &num);
	int h = num / 100;
	int t = num % 100;
	t = t / 10;
	int o = num % 10;
	for (int i = 0; i < 5; i++)
	{
		printf("%c", str[h][i]);
	}
	printf(" ");
	for (int i = 0; i < 5; i++)
	{
		printf("%c", str[t][i]);
	}
	printf(" ");
	for (int i = 0; i < 5; i++)
	{
		printf("%c", str[o][i]);
	}
}