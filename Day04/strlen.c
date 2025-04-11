/*
	strlen - 문자열 길이를 계산
	strcat - 문자열을 붙이는 함수
	strcmp - 문자열 전체 비교하고, 사전상 비교 결과를 반환하는 함수
*/

#include <stdio.h>

int main() {
	
	//===== strlen =====
	char str[100] = "apple";
	printf("(strlen) str 문자열 길이: %d\n", strlen(str));
	printf("=================================\n");
	
	//===== strcat =====
	char str2[100] = "apple";

	strcat(str, "banana");			// "banana" 전체 붙임
	printf("(strcat) str: %s\n", str);

	strncat(str, "orange", 3);		// 앞 3글자 "ora"만 추가 
	printf("(strncat) str: %s\n", str);
	printf("=================================\n");


	//===== strcmp =====
	char str3[100] = "apple";
	char str4[100] = "orange";

	/* str3이 사전에서 먼저 나오면 -1 반환, str4가 먼저 나오면 1 반환, 같으면 0을 반환 */
	if (strcmp(str3, str4) > 0) printf("%s\n", str3);
	else printf("%s\n", str4);

	strncmp(str3, str4, 3);

	return 0;


}