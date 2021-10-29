#include <stdio.h>

int multi_var() {

	//int year;   //declare variable
	//int month;  // 정수형 변수 선언
	//int day;

	int year, month, day; //declare multiple variables by using ,

	year = 1999; //assign value 
	month = 8;   //변수에 값을 할당
	day = 9;

	printf("(multi_var)My birth day is %d/%d/%d\n", year, month, day);

	return 0;
}
// declare variable = int(type of variable)  number(name of variable)
// ex) int num1;