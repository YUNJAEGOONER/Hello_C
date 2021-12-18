#include <stdio.h>
#include <stdlib.h>

void translate(int input, int size) {
	
	int* memory = malloc(sizeof(int) * size);
	int i = 0;
	int count = 0;
	int number = input;

	while (input / 2 != 0) {

		if (input % 2 == 0) {
			memory[i] = 0;
		}
		else {
			memory[i] = 1;
			count = count + 1;
		}
		i = i + 1;
		input = input / 2;
	};
	memory[i] = input;

	//printf("%d\n", i);
	
	//printf("%d\n", memory[size+1]);
	//printf("%d\n", memory[4]);

	printf("%d의 이진수는",number);
	for (int i = size - 1; i > -1; i--) {
		printf("%d", memory[i]);
	}

	printf("\n1의 개수 : %d",count+1);

}

int get_size(int input) {
	
	int size = 0;

	while (input / 2 != 0) {
		input = input / 2;
		size = size + 1;
	}
	return size = size + 1;
}

void main() {
	printf("Hello_World\n");
	int input;
	scanf_s("%d", &input);
	//printf("%d", input);
	int size;

	size = get_size(input);

	translate(input, size);
}