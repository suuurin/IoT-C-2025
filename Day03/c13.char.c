#include <stdio.h>
/* 대.소문자 변환 */
int main(void) {
	// 아스키 코드를 이용
	// A: 65 ~ Z: 90
	// a: 97 ~ z: 122
	char ch1; 
	char ch2 = 'A';
	if ((ch2 >= 'A') && ch2 <= 'Z') {
		ch1 = ch2 + ('a' - 'A');
	}
	printf("대문자: %c", ch2);
	printf("소문자: %c", ch1);


}