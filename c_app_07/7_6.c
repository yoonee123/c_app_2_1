#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int printLower(int guest, int max, int min) {
    min = guest + 1;
    printf("%d�� %d ������ ���� �ٽ� �Է��ϼ��� >> ", min, max);
    return min;
}

int printHigher(int guest, int max, int min) {
    max = guest - 1;
    printf("%d�� %d ������ ���� �ٽ� �Է��ϼ��� >> ", min, max);
    return max;
}

int main6(void) {
    srand(time(NULL));
    int num = rand() % 99 + 1;
    int max = 100, min = 1;
    int cnt = 1, guest = 0;

    printf("1~100 ������ �����Ǿ����ϴ�. ���纸���� >> ");

    while (1) {
        scanf_s("%d", &guest);

        if (num > guest)
        {
            printf("(�õ�Ƚ�� %d��) ", cnt);
            min = printLower(guest, max, min);
        }
        else if (num < guest)
        {
            printf("(�õ�Ƚ�� %d��) ", cnt);
            max = printHigher(guest, max, min);
        }
        else {
            printf("�����մϴ�! �õ� %d������ %d�� �������ϴ�.\n", cnt, num);
            break;
        }
        cnt++;
    }
    return 0;
}