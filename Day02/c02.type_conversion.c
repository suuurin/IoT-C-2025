/* 형변환 */

#include <stdio.h>

int main() {
	int a = 10;
	double b = a;	// int -> double (묵시적 형변환)
					// 컴파일러가 자동으로 변환
					// 더 큰 크기로만 가능

	printf("a: %d, b: %f\n", a, b);  // b: 10.000000 출력

	int x = 5;
	float y = 2.5;
	float result = x + y;  // int + float → float

	printf("res: %f\n", result);  // 7.500000 출력

	// 명시적 형변환
	double num = 9.76;
	int trunc_num = (int)num;	// double → int (명시적 형변환)

	printf("num: %f, trunc_num: %d\n", num, trunc_num);	// trunc_num: 9 출력

	int c = 5, d = 2;
	float e = 2.0;
	double result1 = c / d;  // int / int → int (묵시적 형변환)
	double result2 = (double)c / d;  // double / int → double (명시적 형변환)
	double result3 = c / e;

	printf("result1: %f\n", result1);  // 2.000000 (정수 나눗셈)
	printf("result2: %f\n", result2);  // 2.500000 (실수 나눗셈)
	printf("result2: %f\n", result3);

	// 연산을 수행할 때, 연산자가 적용되기 전에 피연산자들의 타입 자동변환해줌
	// (char → int → float → double)

}