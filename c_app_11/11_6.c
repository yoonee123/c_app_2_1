// �� ���ڿ��� ���� ��ȯ���ִ� �Լ��� �����, ȣ���� ���ÿ�.
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

    printf("ù ��° ���ڿ��� �Է��ϼ���: ");
    scanf_s("%s", str1, 100);
    printf("�� ��° ���ڿ��� �Է��ϼ���: ");
    scanf_s("%s", str2, 100);

    swapStr(str1, str2);

    printf("\n��ȯ ��:\n");
    printf("ù ��° ���ڿ�: %s\n", str1);
    printf("�� ��° ���ڿ�: %s\n", str2);
}

