#include <stdio.h>
#include <float.h>

int overunderflow() {

	float num1 = FLT_MIN;
	float num2 = FLT_MAX;

	float underflow = num1/100;
	float overflow = num2*100;

	printf("underflow in real number = %f, overflow in realnmber = %f\n", underflow, overflow);
	return 0;
}


	//�Ǽ����� ����÷ο� �߻��� 0 �Ǵ� ������ ������ ó��
	//�Ǽ����� �����÷ο� �߻��� ���Ѵ�� ó��}