// 난수를 이용하여 1에서 45 사이의 서로 다른 숫자 6개를 발생시켜 출력하시오.
// (중복제거하고, 라이브러리 rand(), srand(), time() 사용)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main7() {
    srand(time(NULL)); // 난수 초기화

    int arr[6];
    int count = 0;

    while (count < 6) {
        int value = (rand() % 45) + 1;
        int isDuplicate = 0;

        // 이전에 생성된 값들과 중복을 확인
        for (int i = 0; i < count; i++) {
            if (arr[i] == value) {
                isDuplicate = 1;
                break;
            }
        }

        // 중복이 아니면 배열에 추가
        if (!isDuplicate) { // 값이 0일 때 실행
            arr[count] = value;
            count++;
        }
    }

    // 생성된 고유한 난수 출력
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
}