// 현금을 입력 받아 큰 단위 화폐 위주로 각 단위의 개수를 구하시오. 
// 화폐단위를 배열에 저장하여 반복문을 쓰시오. (예: 108,000원 => 50000원권 2개, 5000원권 1개, 1000원권 3개)
#include <stdio.h>
void main8()
{
	int money;
	int ex;
	int arr[4];
	int brr[4] = { 50000, 10000, 5000, 1000 };
	printf("현금을 입력하세요 : ");
	scanf_s("%d", &money);
	ex = money / 50000;
	money = money % 50000;
	arr[0] = ex;
	ex = money / 10000;
	money = money % 10000;
	arr[1] = ex;
	ex = money / 5000;
	arr[2] = ex;
	money = money % 5000;
	ex = money / 1000;
	arr[3] = ex;
	for (int i = 0; i < 4; i++)
	{
		printf("%d원권은 : %d개 ",brr[i], arr[i]);
	}
	

}