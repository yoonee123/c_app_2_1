// 변수 a, b, c, d, e에 각각 값이 저장되어 있다.포인터 배열을 이용하여 이 중 최대값을 구하시오.
// 한 번은 배열에서 요소를 찾기 위해, 다른 한 번은 해당 요소가 가리키는 변수의 값을 가져오기 위해서
#include <stdio.h>
void main7()
{
	int a = 10, b = 3, c = 5, d = 8, e = 13;
	int* arr[] = { &a, &b, &c, &d, &e };
	int max = *arr[0];

	for (int i = 0; i < 5; i++)
	{
		if (*arr[i] > max)
		{
			max = *arr[i];
		}
	}
	printf("최댓 값은 : %d", max);
}
