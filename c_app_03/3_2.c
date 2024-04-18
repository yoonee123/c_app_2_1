// 세 변의 길이를 입력 받아 삼각형의 둘레를 구하시오. (단 삼각형이 형성 안 되는 경우를 체크)
// 오류 처리할것, 가령 a >= b + c이면 삼각형 X
#include <stdio.h>
void main2()
{
	printf("세 변의 길이를 하나씩 입력하세요.");
	int a1, a2, a3;
	scanf_s("%d %d %d", &a1, &a2, &a3);

	if (a1 < a2 + a3 && a2 < a1 + a3 && a3 < a1 + a2) // 삼각형이 됨
	{
		int dule = a1 + a2 + a3;
		printf("삼각형의 둘레는 : %d", dule);
	}
	else
	{
		printf("변 하나의 길이가 너무 길어 삼각형이 되지 않았습니다.");
	}
}