#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int practice() {

	int num1;
	int num2;
	int num3;

	printf("���� �� ���� �Է��ϼ��� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("%d,%d,%d�� ���� %d �Դϴ�", num1, num2, num3, num1 + num2 + num3);

	return 0;
}