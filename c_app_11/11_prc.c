// 한 줄의 문자열을 표준입력으로 입력 받아 영문자의 대문자는 소문자로, 
// 소문자는 대문자로 변환하여 출력하는 프로그램을 작성하시오.
#include <stdio.h>
#include <ctype.h>
void main() {
    char input[100];

    printf("한 줄의 문자열을 입력하세요: ");
    fgets(input, 100, stdin);

    printf("변환된 문자열: ");
    for (int i = 0; input[i] != '\0'; i++) {
        if (isupper(input[i])) { 
            printf("%c", tolower(input[i])); 
        }
        else if (islower(input[i])) 
        { 
            printf("%c", toupper(input[i])); 
        }
    }
}
