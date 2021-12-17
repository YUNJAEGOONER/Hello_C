#include <stdio.h>


void main(){
	printf("Hello_World\n");
	int num;
	scanf_s("%d", &num);
	int result = fibbo(num);
	printf("fibbo = %d\n", result);

	int facto = factorial(num);
	printf("factorial = %d\n", facto);

	int u8;
	scanf_s("%d", &u8);

	int max = find_max(u8);
	printf("%d비트로 표현할 수 있는 최댓값은 %d입니다", u8, max);

}

int fibbo(int n) {
	while (n != 0) {
		
		if (n == 1) {
			return 1;
		}
		else if (n == 2) {
			return 1;
		}
		else {
			return fibbo(n - 1) + fibbo(n - 2);
		}
	}
}

int find_max(int bit){

	int i = 1;
	int result = 0;

	int max = 1;

	for (int j = 0; j < bit; j++) {
		max = max * 2;
	}

	while (result < max - 1)
	{
		result = fibbo(i);
		//printf("%d, %d\n", i, result);
		i = i + 1;
	}

	return fibbo(i - 2);
}

int factorial(int n) {
	while (n != 0) {
		if (n == 1) {
			return 1;
		}
		else {
			return n * factorial(n - 1);
		}
	}
}