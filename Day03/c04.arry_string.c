#include <stdio.h>

int main(void) {
	char str[100] = "banana";
	char str2[5] = "apple";

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);
	/* 출력결과 */
	// str: banana
	//str2: apple儆儆儆儆儆儆儆儆儆儆儆 ? ? ?
	// 문자열 + 1 만큼 배열크기 설정해주기 (null문자 공간)

	char str3[10] = { 'o', 'r', 'a', 'n', 'g', 'e' };
	// 문자 하나하나 담을 때에도 null 문자 공간 있어야 한다
	// 즉, c언어에서는 문자열 끝에 반드시 null 문자가 있어야 함
	printf("str3: %s\n", str3);
	printf("str3[6]: %s\n", str3[6]);
	
	char str4[4];
	str4[0] = 'a';
	str4[1] = 'b';
	str4[2] = 'c';
	printf("str4: %s\n", str4);
	/* 출력 결과 */
	//str4: abc儆儆儆儆儆儆儆儆儆儆儆儆 ? ?
	// null 문자 공간이 남았음에도 출력오류
	// 하나하나 값을 넣어줄 경우에는 null 문자 직접 입력해줘야 함
	str4[3] = NULL;	 // \0
	printf("str4: %s\n", str4);


	// 크기가 충분한 배열에서 나머지 값은 어떻게 처리할까?
	printf("str[50]: %s\n", str[50]);	// 나머지 값에는 NULL 문자로 채운다.

	// 문자열은 대입연산이 안됨
	// str = str2;
	//strcpy 함수 사용하여 문제해결
	strcpy(str, str3);
	printf("str: %s\n", str);

	strcpy(str, "dog");
	printf("str: %s\n", str);

	str[0] = 'D';
	printf("str: %s\n", str);
	// str: log 왜 ..? 지..?
	// → "D" 를 섰기 때문 'D'로 수정

	return 0;

}