/* ����ȯ */

#include <stdio.h>

int main() {
	int a = 10;
	double b = a;	// int -> double (������ ����ȯ)
					// �����Ϸ��� �ڵ����� ��ȯ
					// �� ū ũ��θ� ����

	printf("a: %d, b: %f\n", a, b);  // b: 10.000000 ���

	int x = 5;
	float y = 2.5;
	float result = x + y;  // int + float �� float

	printf("res: %f\n", result);  // 7.500000 ���

	// ����� ����ȯ
	double num = 9.76;
	int trunc_num = (int)num;	// double �� int (����� ����ȯ)

	printf("num: %f, trunc_num: %d\n", num, trunc_num);	// trunc_num: 9 ���

	int c = 5, d = 2;
	float e = 2.0;
	double result1 = c / d;  // int / int �� int (������ ����ȯ)
	double result2 = (double)c / d;  // double / int �� double (����� ����ȯ)
	double result3 = c / e;

	printf("result1: %f\n", result1);  // 2.000000 (���� ������)
	printf("result2: %f\n", result2);  // 2.500000 (�Ǽ� ������)
	printf("result2: %f\n", result3);

	// ������ ������ ��, �����ڰ� ����Ǳ� ���� �ǿ����ڵ��� Ÿ�� �ڵ���ȯ����
	// (char �� int �� float �� double)

}