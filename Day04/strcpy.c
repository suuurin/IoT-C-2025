/*
	strcpy - 문자열 복사 함수
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = "orange";
	char str2[100] = "apple";
	char* ps = "apple";

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);

	strcpy(str, str2);			// strcpy(복사, 원본)
	printf("-복사 후-\n");
	printf("str: %s\n", str);
	printf("str2: %s\n", str2);

	strcpy(str, "banana");
	printf("str: %s\n", str);

	strcpy(str, ps);
	printf("str: %s\n", str);

	// strcpy(ps, str2);			// ps: 배열에 저장하지 않았기에, 복사할 공간 X
	// printf("str: %s", ps);		
	// ps는 문자열 리터럴 "apple"의 주소를 가리키는 포인터, 해당 메모리는 수정할 수 없음.

	strncpy(str, "abcd", 3);		// 시작 주소부터 복사할 문자갯수를 설정할 수 있다.
	printf("%s\n", str);

	return 0;
}
