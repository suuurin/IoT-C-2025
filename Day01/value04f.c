/* 배열 
	동일 자료형을 연속적으로 저장할 수 있는 공간
*/
#include <stdio.h>

int main() {

	char str[10] = "banana";	// 문자타입 배열선언

	printf("str: %s\n", str);
	printf("str[0]: %c\n", str[0]);
	printf("str[1]: %c\n", str[1]);
	printf("str[5]: %c\n", str[5]);
	printf("str[6]: %c\n", str[6]);
	//printf("str[6]: %s\n", str[6]);		// 문자열끝에는 널문자가 온다.

	char str2[6] = "apple";
	printf("str2: %s\n", str2);
	str2[0] = 'A';
	printf("str2: %s\n", str2);

	str = str2;

	return 0;
}