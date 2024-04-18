#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �ߺ����� �ʴ� 6�ڸ� ���� ���� �Լ�
void generate_unique_random(int arr[]) {
    int temp[45] = { 0 }; // �ߺ� Ȯ���� ���� �迭
    int num_generated = 0; // ������ ������ ����

    while (num_generated < 6) {
        int rand_num = rand() % 45 + 1; // 1���� 45������ ���� ����

        // �ߺ� Ȯ��
        if (temp[rand_num - 1] == 0) {
            arr[num_generated] = rand_num;
            temp[rand_num - 1] = 1; // �ߺ� üũ�� ���� �ش� �ε����� 1�� ����
            num_generated++;
        }
    }
}

// �ζ� ��ȣ�� �����ϰ� ��÷ ���θ� �Ǵ��ϴ� �Լ�
int check_lotto_winner(int target_lotto[]) {
    int count = 0;
    int total_sets = 1000000000;

    for (int i = 0; i < total_sets; i++) {
        int lotto[6];
        // �ζ� ��ȣ ����
        generate_unique_random(lotto);

        // ��÷ ���� Ȯ��
        int match_count = 0;
        for (int j = 0; j < 6; j++) {
            for (int k = 0; k < 6; k++) {
                if (target_lotto[j] == lotto[k]) {
                    match_count++;
                    break;
                }
            }
        }
        if (match_count == 6) { // 1�� ��÷ ��
            count++;
        }
    }

    printf("1�� ��÷ Ȯ��: %.15f%%\n", (double)count / total_sets * 100);
    return count;
}

void main9() {
    srand(time(NULL)); // ���� �ʱ�ȭ

    int target_lotto[6] = { 1, 2, 3, 4, 5, 6 }; // 1�� ��ȣ
    int count = check_lotto_winner(target_lotto);

    printf("�� ��÷ ��Ʈ ��: %d\n", count);
}
