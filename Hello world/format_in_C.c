#include <stdio.h>

int format() { //return type:int, name:format, parameter:X 	
	//printf("Hello Format");
	printf("\n%s%s%s", "Hello", " Format","!");
	//\n = Skip the line (줄 바꾸기), %s = for String
	//3개의 %s 이므로 3개의 String

	printf("\nI %s born in %d\n", "was" ,1999);
	//%s = for String, %d = for integer 
	return 0;
}

//서식 지정자 
//같은 내용 출력시, 변수만 바꾸어서 출력이가능
//출력의 형태를 변경하는데 유용