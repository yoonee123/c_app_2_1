// ���ڿ� 5���� �Է� �޾� ������������� �����Ͽ� ����Ͻÿ�.(2���� �迭 �̿�)
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
    printf("���ڿ��� �Է��ϼ���\n");
    for (int i = 0; i < 5; i++) {
        printf("���ڿ� %d: ", i + 1);
        scanf_s("%s", strings[i], 5);
    }

    sortStrings(strings, 5);

    printf("���� ���������� ���ĵ� ���ڿ� : ");
    for (int i = 0; i < 5; i++) {
        printf("%s", strings[i]);
    }
}
