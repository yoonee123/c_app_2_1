// 3���� ����� ���� ����ü struct home_address�� �����ϰ�, 
// �������� ���� 2���� �����ϸ鼭 �ʱ� ���� ������ ������ ���� ����ϴ� ���α׷���
// �ۼ��Ͻÿ�.
// address add1 = { 223, "������", "�����" };
// address add2 = { .city = "�����", .st_num = 567, .street = "���η�" };

#include <stdio.h>

// ����ü ����
struct home_address {
    int st_num;
    char street[50];
    char city[50];
};

void main5() {
    // ����ü ���� ���� �� �ʱ�ȭ
    struct home_address add1 = { 223, "������", "�����" };
    struct home_address add2 = { .city = "�����", .st_num = 567, .street = "���η�" };

    // ���
    printf("�ּ� 1:\n");
    printf("����: %s\n", add1.city);
    printf("�Ÿ�: %s\n", add1.street);
    printf("����: %d\n", add1.st_num);

    printf("\n�ּ� 2:\n");
    printf("����: %s\n", add2.city);
    printf("�Ÿ�: %s\n", add2.street);
    printf("����: %d\n", add2.st_num);

}
