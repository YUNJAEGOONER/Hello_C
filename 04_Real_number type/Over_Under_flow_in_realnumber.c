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


	//실수에서 언더플로우 발생시 0 또는 쓰레기 값으로 처리
	//실수에서 오버플로우 발생시 무한대로 처리}