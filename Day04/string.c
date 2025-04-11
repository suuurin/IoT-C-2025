/*
	문자열
	scanf, gets (공백까지 입력 가능)
	stdin - 표준 출력 버퍼(스트링)
	
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//========string 1==========
	char str[100] = "orange";

	printf("%s\n", str);
	printf("%s\n", "orange");
	printf("%p\n", "ornage");
	printf("%c\n", *"orange");
	printf("%c\n", *("orange"+1));
	printf("%c\n", "orange"[2]);
	printf("============================\n");

	

	//========string 2==========
	// 문자열 상수 = 주소
	char* ps1 = "orange";
	printf("ps가 가리키는 값: %s\n", ps1);
	ps1 = "banana";
	printf("ps가 가리키는 값: %s\n", ps1);
	printf("============================\n");


	//========string 3==========
	
	char str3[100];

	//printf("문자열 입력 >> ");
	//scanf("%s", str3);

	//printf("문자열: %s", str3);
	//scanf("%s\n", str3);
	//printf("다음 문자열: %s\n", str3);

	///* gets */
	//printf("공백을 포함한 입력 >> ");
	//gets(str3);
	//printf("입력 문자열: %s\n", str3);

	/* fgets */
	printf("공백을 포함한 입력 >> ");
	fgets(str3, sizeof(str3), stdin);
	printf("입력 문자열: %s", str3);
	printf("============================\n");

	//========string 4==========
	/* puts, fputs - 전용 출력 함수 */

	char str4[100] = "Delmonte orange";
	char* ps2 = "banana";

	printf("%s\n", str);
	puts(str4);					// 자동 개행
	fputs(str4, stdout);		// 개행 안됨
	puts(ps2);
	fputs(ps2, stdout);

	return 0;

}