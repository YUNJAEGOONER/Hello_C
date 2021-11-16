#include <stdio.h>

int integer_suffix() {

	printf("literal suffix(접미사)\n");
	//접미사로 리터럴의 크기를 표기

	printf("%ld\n", -10L);

	printf("%lld\n", -1234567890123456789LL);

	printf("%u\n", 10U);
	printf("%lu\n", 1234567890UL);
	printf("%llu\n", 1234567890123456789ULL);

	printf("0%lo\n", 017L); //long, 8진 정수 
	printf("0%lo\n", 017UL); //unsigned long, 8진 정수

	printf("0x%lX\n", 0x7FFFFFL); //long, 16진 정수
	printf("0x%lX\n", 0xFFFFFFFFUL); //unsigned long, 16진 정수

	//Integer suffix
	//int( ), unsinged int ( u,U ) long( l,L ), unsigned long( ul, UL )
	//long long ( ll, LL ), unsigned long long ( ull, ULL )

	return 0;
}

int real_number_suffix() {

	printf("%f\n", 0.1f); //float
	printf("%f\n", 0.1F); 

	printf("%f\n", 0.1); //double

	printf("%Lf\n", 0.1l);//long double
	printf("%Lf\n", 0.1L);

	printf("%f\n", 1.23e0f); //float
	printf("%f\n", 1.23e-1F);

	printf("%f\n", 1.23e-2); //double

	printf("%Lf\n", 1.23e-3l);//long double
	printf("%Lf\n", 1.23e-4L);

	//realnumber suffix
	//float ( f, F ), double ( ), long double( l,L )

	return 0;
}