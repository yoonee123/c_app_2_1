// 문자 2개를 입력받아 아스키값 순서로 그 다음 문자를 출력하시오.
// ex) a와 d라면 b와 e출력
#include <stdio.h>
void main2()
{
	char c1, c2;

	printf("문자 두개를 입력하시오.\n");
	scanf_s("%c %c", &c1, 1, &c2, 1);

	printf("입력한 두개의 문자 다음 값은 %c %c", c1 + 1, c2 + 1);
}
// c나 s를 쓸 때는 변수값의 크기(인자)를 반드시 써줘야함. ex) &c1, 1