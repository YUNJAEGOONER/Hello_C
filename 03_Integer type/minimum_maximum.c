#include <stdio.h>
#include <limits.h> 

int min_max(){

	char num1 = CHAR_MIN;
	char num2 = CHAR_MAX;
	
	short num3 = SHRT_MIN;
	short num4 = SHRT_MAX;

	int num5 = INT_MIN;
	int num6 = INT_MAX;

	long num7 = LONG_MIN;
	long num8 = LONG_MAX;

	long long num9 = LLONG_MIN;
	long long num10 = LLONG_MAX;

	printf("char:%d ~ %d short:%d ~ %d int:%d ~ %d\nlong:%ld ~ %ld long long:%lld ~ %lld\n"
		,num1, num2, num3, num4, num5, num6, num7, num8, num9, num10);


	return 0;
}

int un_min_max() {

	unsigned char num1 = UCHAR_MAX;

	unsigned short num2 = USHRT_MAX;

	unsigned num3 = UINT_MAX;

	unsigned long num4 = ULONG_MAX;

	unsigned long long num5 = ULLONG_MAX;

	printf("unsigned정수 자료형의 최솟값은 항상 0이다.(Only positive)\n");
	printf("char:0 ~ %u short:0 ~ %u int:0 ~ %u\nlong:0 ~ %lu long long:0 ~ %llu\n"
		, num1, num2, num3, num4, num5);


	return 0;
}

int min_max_over_under_flow() {
	//overflow는 저장할 수 있는 최댓값보다 큰 수를 할당한 경우에 발생 (최솟값부터시작)
	//underflow는 저장할 수 있는 최솟값보다 작은 수를 할당한 경우에 발생(최댓값부터 시작)

	//overflow & underflow in char
	char num1 = CHAR_MAX + 1; //char 최댓값보다 1 큰 수를 할당 (char의 최솟값이 할당)
	char num2 = CHAR_MIN - 1; //char 최솟값보다 1 작은 수를 할당 (char의 최댓값이 할당)

	//overflow & underflow in unsinged char
	unsigned char num3 = UCHAR_MAX + 1;//unsigned char 최댓값보다 1 큰 수를 할당(unsigned char의 최솟값이 할당)
	unsigned char num4 = 0 - 1;//unsigned char 최솟값보다 1 작은 수를 할당(unsigned char의 최댓값이 할당)

	printf("char_min: %d, char_max: %d, unsigned char_min: %u, unsigned char_max: %u\n",num1,num2,num3,num4);
	return 0;
}