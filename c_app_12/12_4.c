#include <stdio.h>

// ����ü ����
typedef struct {
    char name[50];
    int ismember; // 1�̸� ȸ��, 0�̸� ��ȸ��
    union {
        int membernum; // ȸ�� ��ȣ
        char nickname[50]; // ��ȸ�� �г���
    } info;
} Person;

void main4() {
    Person people[2] = { 0 }; 

    printf("ȸ���� �̸��� �Է��ϼ���: ");
    scanf_s("%49s", people[0].name, (unsigned int)sizeof(people[0].name));
    people[0].ismember = 1;
    printf("ȸ���� ȸ�� ��ȣ�� �Է��ϼ���: ");
    scanf_s("%d", &people[0].info.membernum);

    printf("��ȸ���� �̸��� �Է��ϼ���: ");
    scanf_s("%49s", people[1].name, (unsigned int)sizeof(people[1].name));
    people[1].ismember = 0;
    printf("��ȸ���� �г����� �Է��ϼ���: ");
    scanf_s("%49s", people[1].info.nickname, (unsigned int)sizeof(people[1].info.nickname));

    for (int i = 0; i < 2; i++) {
        printf("\n�̸�: %s\n", people[i].name);
        if (people[i].ismember) {
            printf("ȸ�� ����: ȸ��\n");
            printf("ȸ�� ��ȣ: %d\n", people[i].info.membernum);
        }
        else {
            printf("ȸ�� ����: ��ȸ��\n");
            printf("�г���: %s\n", people[i].info.nickname);
        }
    }

}
