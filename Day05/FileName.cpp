#include <stdio.h>

int sum(int, int);
int min(int, int);
int mul(int, int);
int divide(int, int);

void func(int(*fp)(int, int));

int main() {
    func(NULL); // func에서 연산 선택 및 실행
    return 0;
}

int sum(int a, int b) { return a + b; }
int min(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; } // 0으로 나누는 경우 방지

void func(int(*fp)(int, int)) {
    int choice;
    printf("연산을 선택하세요 (1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈): ");
    scanf("%d", &choice);

    // 선택에 따라 함수 포인터 할당
    switch (choice) {
    case 1: fp = sum; break;
    case 2: fp = min; break;
    case 3: fp = mul; break;
    case 4: fp = divide; break;
    default:
        printf("잘못된 선택입니다.\n");
        return;
    }

    int a, b;
    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    int res = fp(a, b);
    printf("결과: %d\n", res);
}
