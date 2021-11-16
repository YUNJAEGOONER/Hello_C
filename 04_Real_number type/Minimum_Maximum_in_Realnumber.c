#include <stdio.h>
#include <float.h> 

int min_max() {
	printf("Minimum&Maximum in realnumber\n");

	float num1 = FLT_MIN;
	float num2 = FLT_MAX;
	
	double num3 = DBL_MIN;
	double num4 = DBL_MAX;

	long double num5 = LDBL_MIN;
	long double num6 = LDBL_MAX;
	
	printf("float min = %.40f\nfloat max = %.5f\n", num1, num2);
	//%.40f =>float의 소수점 40번째까지 

	printf("double min = %e\ndouble max = %e\n",num3,num4);
	printf("long double min = %Le\nlong double max = %Le\n", num5, num6);

	//Size of the double and long double is same as 8byte(64bit)

	return 0;
}