// �����Կ� Ű�� �Է��Ͽ� BMI�� ���ϰ�, 18�̸��̸� ��ü��, 18 ~ 25�� ����, 25�ʰ��� ��ü���� ����Ͻÿ�.
#include <stdio.h>
void main5()
{
	double he, we, bmi;
	printf("Ű�� �����Ը� ������� �Է��ϼ���.");
	scanf_s("%lf %lf", &he, &we);
	he = he / 100;
	he = he * he;
	bmi = we / he;
	printf("%.3lf", bmi);

	if (bmi < 18)
		printf("��ü��");
	else if (bmi > 18 && bmi < 25)
		printf("����");
	else
		printf("��ü��");
}