#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 중복되지 않는 6자리 난수 생성 함수
void generate_unique_random(int arr[]) {
    int temp[45] = { 0 }; // 중복 확인을 위한 배열
    int num_generated = 0; // 생성된 난수의 개수

    while (num_generated < 6) {
        int rand_num = rand() % 45 + 1; // 1부터 45까지의 난수 생성

        // 중복 확인
        if (temp[rand_num - 1] == 0) {
            arr[num_generated] = rand_num;
            temp[rand_num - 1] = 1; // 중복 체크를 위해 해당 인덱스를 1로 설정
            num_generated++;
        }
    }
}

// 로또 번호를 생성하고 당첨 여부를 판단하는 함수
int check_lotto_winner(int target_lotto[]) {
    int count = 0;
    int total_sets = 1000000000;

    for (int i = 0; i < total_sets; i++) {
        int lotto[6];
        // 로또 번호 생성
        generate_unique_random(lotto);

        // 당첨 여부 확인
        int match_count = 0;
        for (int j = 0; j < 6; j++) {
            for (int k = 0; k < 6; k++) {
                if (target_lotto[j] == lotto[k]) {
                    match_count++;
                    break;
                }
            }
        }
        if (match_count == 6) { // 1등 당첨 시
            count++;
        }
    }

    printf("1등 당첨 확률: %.15f%%\n", (double)count / total_sets * 100);
    return count;
}

void main9() {
    srand(time(NULL)); // 난수 초기화

    int target_lotto[6] = { 1, 2, 3, 4, 5, 6 }; // 1등 번호
    int count = check_lotto_winner(target_lotto);

    printf("총 당첨 세트 수: %d\n", count);
}
