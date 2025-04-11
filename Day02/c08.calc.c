#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int, int);
int minus(int, int);
int div(int, int);
int product(int, int);

int main() {
	int num1 = 0;
	int num2 = 0;		// 피연산자 담을 변수
	char oper;			// 연산자 담을 변수
	int res;			// 결과를 담을 변수
	printf("계산기 프로그램입니다.\n");
	while (1) {
		printf("첫 번째 정수를 입력하세요. (입력종료:q) > ");
		if (scanf("%d", &num1) != 1) {
			while (getchar() != '\n');
			break;	// 조건은 무조건 괄호안에 있어야 함
		}
		printf("두 번째 정수를 입력하세요. > ");
		scanf("%d", &num2);
	
		// printf("%d %d", num1, num2);	// 값 입력 확인 ok
		printf("연산자를 입력하세요. > ");
		scanf(" %c", &oper);		// "%c"를 하면 오류 남 " %c" 로 입력하면 오류x
									// 이유 찾아볼 것
									// Question.md 파일 확인할 것
		if (num2 == 0 && oper == '/') {
			printf("0으로 나눌 수 없습니다.\n");
			printf("다시 입력해주세요.\n");
			continue;
		}
		if (oper == '+') res = add(num1, num2);
		else if (oper == '-') res = minus(num1, num2);
		else if (oper == '/') res = div(num1, num2);
		else if (oper == '*') res = product(num1, num2);
		else {
			printf("연산자를 잘못입력했습니다.\n");
			printf("입력창으로 다시 돌아갑니다.\n");
			continue;
		}

		printf("연산의 결과는 %d 입니다.\n\n", res);
	}

	return 0;
}
/* 덧셈 함수*/
int add(int num1, int num2) {
	// return num1 + num2; 이건 파이썬 방식. 따로 변수 만들어서 return 해야됨
	int res = num1 + num2;
	return res;
}
/* 뺄셈 함수*/
int minus(int num1, int num2) {
	int res = num1 - num2;
	return res;
}
/* 나눗셈 함수*/
int div(int num1, int num2) {
	int res = num1 / num2;
	return res;
}
/* 곱셈 함수*/
int product(int num1, int num2) {
	int res = num1 * num2;
	return res;
}
