#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int, int);
int min(int, int);
int mul(int, int);
int divide(int, int);

int (*func())(int, int); // �Լ� ������ ��ȯ�ϵ��� ����

int main() {
    int (*fp)(int, int);
    int res;
    //res = sum(20, 10);
    //res = min(20, 10);
    fp = func(); // func�� �Լ� �����͸� ��ȯ�ϵ��� ����
    res = fp(3, 2);
    printf("res: %d\n", res);
    return 0;
}

int sum(int a, int b) { return a + b; }
int min(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; } // 0���� ������ ��� ����

int (*func())(int, int) { // �Լ� ������ ��ȯ
    int choice;
    printf("������ �����ϼ��� (1: ����, 2: ����, 3: ����, 4: ������): ");
    scanf("%d", &choice);

    // ���ÿ� ���� �Լ� ������ ��ȯ
    switch (choice) {
    case 1: return sum;
    case 2: return min;
    case 3: return mul;
    case 4: return divide;
    default:
        printf("�߸��� �����Դϴ�.\n");
        return sum; // �⺻������ ������ ��ȯ (���� ó��)
    }
}
