// 배열을 인자로 받아 최대값을 가진 원소를 리턴 해주는 함수를 만들고, 
// 이 함수를 이용하여 배열에 입력된 여러 수 중 최대값을 출력하시오.
#include <stdio.h>
int max(int a[], int s);

void main5()
{
	int brr[5] = { 3, 6, 10, 239, 51 };
	int top;

	top = max(brr, 5);
	printf("가장 큰 값은 : %d", top);
}

int max(int arr[], int s)
{
	int i, top;
	
	top = arr[0];
	for (i = 1; i < s; i++)
	{
		if (arr[i] > top)
		{
			top = arr[i];
		}
	}
	return top;
}