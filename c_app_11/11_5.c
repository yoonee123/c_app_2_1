// ���ڿ��� �Ųٷ� ������ִ� �Լ��� �����, ȣ���� ���ÿ�.

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

    printf("���ڿ��� �Է��ϼ���: ");
    scanf_s("%s", str, 100);

    printf("�Ųٷ� ��µ� ���ڿ�: ");
    reverseString(str);
}
