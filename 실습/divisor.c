#include <stdio.h>
#include <stdlib.h>

int num = 75;
int result = 2;

void print(int* array,int index) {

	result = 0;

	printf("%d�� �����", num);
	for (int i = 0; i < index; i++) {
		printf(" %d", array[i]);
		result = result + array[i];
	}printf("�Դϴ�.\n");

	if (result == 2 * num) {
		printf("%d�� ������ �Դϴ�.\n", num);
	}
	else {
		printf("%d�� �������� �ƴմϴ�.\n", num);
	}
}

void main() {

	int i = 1;
	int index = 0;
	int* array = malloc(sizeof(int) * 10);

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
