#include <stdio.h>
int constant() {

	printf("Constant in C\n");

	const int con1 = 1; 
	//Integer costant
	//상수는 반드시 선언과 동시에 값이 할당 되어야한다
	// con1 = 2; (Error 상수이기 때문에 새로운 값을 할당 받을수 없다)

	const float con2 = 1e-1f;
	const char con3 = 97;

	printf("정수형 상수 %d, 실수형 상수 %f, 문자형 상수 %c\n", con1, con2, con3);

	return 0;
}