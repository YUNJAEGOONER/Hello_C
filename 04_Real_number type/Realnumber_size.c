#include <stdio.h>
int size_of_realnumber() {

	printf("size_of_realnumber\n");
	//12.3 1.23 0.123

	float num1 = 1.23e1f;

	double num2 = 1.23;

	long double num3 = 1.23e-1;
	
	printf("%f %f %Lf\n", num1, num2, num3);

	int size1 = sizeof(num1);

	printf("float: %d, double: %d, long double: %d\n",size1, sizeof(num2), sizeof(num3));

	return 0;
}