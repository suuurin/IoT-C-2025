#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int, int);
int min(int, int);
int mul(int, int);
int divide(int, int);

int (*func())(int, int); // 함수 포인터 반환하도록 수정

int main() {
    int (*fp)(int, int);
    int res;
    //res = sum(20, 10);
    //res = min(20, 10);
    fp = func(); // func이 함수 포인터를 반환하도록 변경
    res = fp(3, 2);
    printf("res: %d\n", res);
    return 0;
}

int sum(int a, int b) { return a + b; }
int min(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; } // 0으로 나누는 경우 방지

int (*func())(int, int) { // 함수 포인터 반환
    int choice;
    printf("연산을 선택하세요 (1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈): ");
    scanf("%d", &choice);

    // 선택에 따라 함수 포인터 반환
    switch (choice) {
    case 1: return sum;
    case 2: return min;
    case 3: return mul;
    case 4: return divide;
    default:
        printf("잘못된 선택입니다.\n");
        return sum; // 기본적으로 덧셈을 반환 (예외 처리)
    }
}
