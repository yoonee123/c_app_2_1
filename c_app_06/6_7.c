// ������ �̿��Ͽ� 1���� 45 ������ ���� �ٸ� ���� 6���� �߻����� ����Ͻÿ�.
// (�ߺ������ϰ�, ���̺귯�� rand(), srand(), time() ���)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main7() {
    srand(time(NULL)); // ���� �ʱ�ȭ

    int arr[6];
    int count = 0;

    while (count < 6) {
        int value = (rand() % 45) + 1;
        int isDuplicate = 0;

        // ������ ������ ����� �ߺ��� Ȯ��
        for (int i = 0; i < count; i++) {
            if (arr[i] == value) {
                isDuplicate = 1;
                break;
            }
        }

        // �ߺ��� �ƴϸ� �迭�� �߰�
        if (!isDuplicate) { // ���� 0�� �� ����
            arr[count] = value;
            count++;
        }
    }

    // ������ ������ ���� ���
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
}