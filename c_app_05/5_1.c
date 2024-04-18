// 5개의 수를 배열에 입력 받은 후, 끝 원소부터 거꾸로 출력해보시오.
#include <stdio.h>
void main1()
{
	int arr[5];
	printf("수를 5개 입력하세요 : ");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("입력한 수를 거꾸로 출력한 결과는 : ");
	for (int j = 4; j >= 0; j--)
	{
		printf("%d ", arr[j]);
	}
	
}