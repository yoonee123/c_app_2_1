// 함수(예를 들어 foo() 함수) 자신이 몇 번 호출되었는지 리턴해주는 함수를 만들고 
// 여러 번 호출하여 검증해보시오.
#include <stdio.h>
static int sum = 0;
int foo()
{
    sum++;
    return sum; // 호출 횟수를 증가시킨 후 반환
}

void main5()
{
    printf("%d번 호출 되었습니다.\n", foo());
    printf("%d번 호출 되었습니다.\n", foo());
    printf("%d번 호출 되었습니다.\n", foo());
}