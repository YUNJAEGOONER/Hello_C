#include <stdio.h>
#include <stdlib.h>

int num;
int result = 2;

void print(int* array,int index) {

	result = 0;

	printf("%d의 약수는", num);
	for (int i = 0; i < index; i++) {
		printf(" %d", array[i]);
		result = result + array[i];
	}printf("입니다.\n");

	if (result == 2 * num) {
		printf("%d는 완전수 입니다.\n", num);
	}
	else {
		printf("%d는 완전수가 아닙니다.\n", num);
	}
}

void main() {

	printf("정수를 입력하세요 :");
	scanf_s("%d", &num);
	int i = 1;
	int index = 0;
	int* array = malloc(sizeof(int) * num);

	while (i < result)
	{
		if (num % i == 0) {
			result = num / i;
			if (result == i) {
				array[index] = i;
			}
			else {
				array[index] = result;
				array[index + 1] = i;
				index = index + 2;
			}
			//printf("( %d %d )\n", result,i);
		}
		i = i + 1;
	}

	print(array, index);
	printf("Hello_World\n");	
}
