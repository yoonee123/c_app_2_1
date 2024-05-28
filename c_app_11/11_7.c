// 문자열 5개를 입력 받아 영어사전식으로 정렬하여 출력하시오.(2차원 배열 이용)
#include <stdio.h>
void swapStrings(char* str1, char* str2, int max_length) {
    for (int i = 0; i < max_length; i++) {
        char temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }
}

void sortStrings(char strings[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int k = 0;
            while (strings[j][k] == strings[j + 1][k]) {
                if (strings[j][k] == '\0') break;
                k++;
            }
            if (strings[j][k] > strings[j + 1][k]) {
                swapStrings(strings[j], strings[j + 1], 100);
            }
        }
    }
}

void main7() {
    char strings[5][100];
    printf("문자열을 입력하세요\n");
    for (int i = 0; i < 5; i++) {
        printf("문자열 %d: ", i + 1);
        scanf_s("%s", strings[i], 5);
    }

    sortStrings(strings, 5);

    printf("영어 사전식으로 정렬된 문자열 : ");
    for (int i = 0; i < 5; i++) {
        printf("%s", strings[i]);
    }
}
