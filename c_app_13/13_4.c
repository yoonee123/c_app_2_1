// 세변으로 이루어진 삼각형 구조체를 정의하고, 2개의 삼각형이 동일한지 판별하는 함수만들기
#include <stdio.h>
typedef struct
{
	int firstL;
	int secondL;
	int thirdL;
} triangle;
void sorttri(triangle* t)
{
	int Lines[3] = { t->firstL, t->secondL, t->thirdL };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (Lines[j] > Lines[j + 1])
			{
				int temp = Lines[j];
				Lines[j] = Lines[j + 1];
				Lines[j + 1] = temp;
			}
		}
	}
	t->firstL = Lines[0];
	t->secondL = Lines[1];
	t->thirdL = Lines[2];
}
int triCorrect(triangle t1, triangle t2)
{
	sorttri(&t1);
	sorttri(&t2);
	if (t1.firstL == t2.firstL) {
		if (t1.secondL == t2.secondL) {
			if (t1.thirdL == t2.thirdL) {
				return 1;
			}
		}
	}
	return 0;
}
void main()
{
	triangle triangle1 = { 3, 4, 5 };
	triangle triangle2 = { 5, 4, 3 };
	
	if (triCorrect(triangle1, triangle2) == 1)
	{
		printf("두 삼각형이 동일합니다.");
	}
	else if (triCorrect(triangle1, triangle2) == 0)
	{
		printf("두 삼각형이 동일하지 않습니다.");
	}
}