#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int scan_realnumber() {
	printf("�Ǽ��� �Է��ϼ��� : ");

	float num1;
	scanf_s("%f", &num1);
	//���������� ������ ���� scanf Ȱ��
	//double ���������ڸ� lf, long double Lf

	printf("%f\n", num1);

	return 0;
}