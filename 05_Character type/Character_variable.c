#include <stdio.h>

int char_variable(){

	printf("Character Variabel (feat.ASCII)\n");

	char c1 = 'a';
	char c2 = 'b';

	printf("%c, ASCII code is %d\n", c1, c1);
	//%c(Character)�� ���� ���, %d�� ������ �ƽ�Ű �ڵ尪(������ ������)�� ���
	//%d ���� �ڷ��� ��½� ���
	printf("%c, ASCII code is %d\n", c2, c2);

	//Declare the Char variable by using Integer
	//������ ���� ���� ���� (10���� ����)

	char c3 = 97;
	char c4 = 98;

	printf("%d is %c\n", c3, c3);
	printf("%d is %c\n", c4, c4);

	//������ ���� ���� ���� (16����(hexadecimal) ����)

	char c5 = 0x61;
	char c6 = 0x62;

	printf("%c %d(ASCII 10����) 0x%x(ASCII 16����)\n", c5, c5, c5);
	//%x(hex)�� 61���
	printf("%c %d(ASCII 10����) 0x%x(ASCII 16����)\n", c6, c6, c6);

	char c7 = '0'; // char 0
	char c8 = 0; // 0��° ASCII (null)

	printf("%c  ASCII code is %d\n",c7,c7);
	printf("%d is %c(null)\n", c8, c8);

	return 0;
}