#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int printLower(int guest, int max, int min) {
    min = guest + 1;
    printf("%d와 %d 사이의 수를 다시 입력하세요 >> ", min, max);
    return min;
}

int printHigher(int guest, int max, int min) {
    max = guest - 1;
    printf("%d와 %d 사이의 수를 다시 입력하세요 >> ", min, max);
    return max;
}

int main6(void) {
    srand(time(NULL));
    int num = rand() % 99 + 1;
    int max = 100, min = 1;
    int cnt = 1, guest = 0;

    printf("1~100 정수가 결정되었습니다. 맞춰보세요 >> ");

    while (1) {
        scanf_s("%d", &guest);

        if (num > guest)
        {
            printf("(시도횟수 %d번) ", cnt);
            min = printLower(guest, max, min);
        }
        else if (num < guest)
        {
            printf("(시도횟수 %d번) ", cnt);
            max = printHigher(guest, max, min);
        }
        else {
            printf("축하합니다! 시도 %d번만에 %d를 맞혔습니다.\n", cnt, num);
            break;
        }
        cnt++;
    }
    return 0;
}