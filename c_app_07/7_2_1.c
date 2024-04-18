#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int Arr[10];

void init_arr()
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		Arr[i] = rand() + 1;
	}
}
void print_sum()
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum = sum + Arr[i];
	}
	printf("배열의 합은 : %d", sum);
}