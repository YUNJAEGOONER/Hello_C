#include <stdio.h>

void main(){
	printf("Hello_World\n");
	int num;
	scanf_s("%d", &num);
	int result = fibbo(num);
	printf("fibbo = %d\n", result);

	int facto = factorial(num);
	printf("factorial = %d", facto);
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