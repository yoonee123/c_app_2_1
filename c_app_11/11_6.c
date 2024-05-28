// 두 문자열을 서로 교환해주는 함수를 만들고, 호출해 보시오.
// ( void swapStr(char *, char *) )
#include <stdio.h>
#include <string.h>

void swapStr(char* str1, char* str2) {
    char temp[100];

    strcpy_s(temp, 100, str1);
    strcpy_s(str1, 100, str2);
    strcpy_s(str2, 100, temp);
}

void main6() {
    char str1[100], str2[100];

    printf("첫 번째 문자열을 입력하세요: ");
    scanf_s("%s", str1, 100);
    printf("두 번째 문자열을 입력하세요: ");
    scanf_s("%s", str2, 100);

    swapStr(str1, str2);

    printf("\n교환 후:\n");
    printf("첫 번째 문자열: %s\n", str1);
    printf("두 번째 문자열: %s\n", str2);
}

