#include <stdio.h>
int type() {
	printf("Types of Realnumber\n");

	// 부동소수점 

	float num1 = 0.1f; 
	//숫자 끝에 f를 붙여준다.
	//0.100000 의 형태로 print 됨

	double num2 = 3867.215820;

	long double num3 = 0.0093275131;

	printf("%f %f %Lf\n", num1, num2, num3);
	//float, double %f , long double %Lf

	return 0;
}

int exponential() {

	printf("exponential notation\n");

	float num1 = 1.e-1f;
	// 1 * 10^-1 = 0.1

	double num2 = 3.86715820e3;
	//3.86715820 * 10^3 = 3867.15820

	long double num3 = 9.3275131e-3;

	printf("%f %f %Lf\n", num1, num2, num3);

	printf("%e %e %Le\n", num1, num2, num3);
	//지수표기법대로 출력

	return 0;
}