// "�̸�, ����, ������"�� ����� ������ ����ü�� �����ϰ�, �ڽ��� ������ �Է� �޾�
// ������ ����, ����ü �����͸� �̿��Ͽ� �ٽ� ����Ͻÿ�.
#include <stdio.h>

struct info
{
	char name[12];
	int age;
	char blood[4];
};
void main1()
{
	struct info me;
	printf("�̸� ���� ������ �Է�!\n");
	scanf_s("%s %d %s", me.name, 12, &me.age, me.blood, 4);
	struct  info* p = &me;
	printf("�̸� : %s ���� : %d�� ������ : %s��", p->name, p->age, p->blood);
}