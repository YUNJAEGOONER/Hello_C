#include <stdio.h>
int constant() {

	printf("Constant in C\n");

	const int con1 = 1; 
	//Integer costant
	//����� �ݵ�� ����� ���ÿ� ���� �Ҵ� �Ǿ���Ѵ�
	// con1 = 2; (Error ����̱� ������ ���ο� ���� �Ҵ� ������ ����)

	const float con2 = 1e-1f;
	const char con3 = 97;

	printf("������ ��� %d, �Ǽ��� ��� %f, ������ ��� %c\n", con1, con2, con3);

	return 0;
}