#define _CRT_SECURE_NO_WARNINGS //scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int scanf_integer() {

	printf("���� ���� �Է��ϼ��� : ");
	
	int num1; //int Ÿ���� ���� num1 ����

	scanf_s("%d", &num1);

	//scanf("%d", &num1);
	//scanf("����������",&�Է°��� ���� ����)

	printf("%d",num1);

	return 0;

}