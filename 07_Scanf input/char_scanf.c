#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int char_input(){

	printf("���ڸ� �Է��ϼ���: ");

	char c1;

	//scanf(" %c",&c1);
	scanf_s(" %c", &c1, sizeof(c1));

	//scanf(" %c",&c1);
	//�ռ� �Լ��鿡 ���� \n�� %c�� �ްԵȴ�.%c�տ� ������ �ָ� �� ������ �ذ��� �� �ִ�.
	//�Է¹��ۺ��� 

	printf("%c\n", c1);
	
	return 0;
}
