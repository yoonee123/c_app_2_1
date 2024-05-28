// 문자열을 거꾸로 출력해주는 함수를 만들고, 호출해 보시오.

#include <stdio.h>
#include <string.h>
void reverseString(char* str) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');
}

void main5() {
    char str[100];

    printf("문자열을 입력하세요: ");
    scanf_s("%s", str, 100);

    printf("거꾸로 출력된 문자열: ");
    reverseString(str);
}
