/* 조건 제어문 */
// if, switch 

#include <stdio.h> 

int main(void) {
	int num1, num2;
	num1 = 30, num2 = 21;

	if (num1 > num2) {
		printf("num1이 num2보다 큽니다.\n");
		printf("%d > % d \n", num1, num2);
	}
	// if문 안의 내용이 한 줄이면 중괄호 생략가능
	if (num1 > num2)
		printf("%d > % d \n", num1, num2);

	int score = 82;
	if (score >= 90) printf("A등급입니다 \n");
	else if (score >= 80) printf("B등급입니다 \n");
	else if (score >= 70) printf("C등급입니다 \n");
	else printf("재시험 대상입니다 \n");

	int num;
	printf("숫자를 입력해주세요 (1~10) > ");
	scanf_s("%d", &num);

	switch (num) {
	case 1:
		printf("case1번입니다.\n");
		break;
	case 2:
		printf("case2번입니다.\n");
		break;
	case 3:
		printf("case3번입니다.\n");

	case 5:
		printf("case5번입니다.\n");
		break;
	default:
		printf("해당하는 case가 없습니다. \n");

	// break 문이 없으면?
	// 다음 case도 계속 실행됨
	// case 3 실행시 case5까지 실행
	}
}