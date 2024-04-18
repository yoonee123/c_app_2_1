// 입력 받은 정수를 다음처럼 32비트의 이진수형태로 출력하시오.
// (만일 7이면, 0000 0000  0000 0000  0000 0000  0000 0111)
#include <stdio.h>
void main8()
{
	printf("정수를 입력하세요\n");
	int input, i;
	scanf_s("%d", &input);
	int result = input;

	if (input == 0)
		printf("프로그램을 종료합니다");
	else {
		int j = 0;
		for (i = 31; i >= 0; i--)
		{
			if (j != 0 && j % 4 == 0)
				printf(" ");
			printf("%d", (input >> i) & 1);
			j++;
		}
	}

	return 0;
}