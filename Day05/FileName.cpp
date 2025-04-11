#include <stdio.h>

int sum(int, int);
int min(int, int);
int mul(int, int);
int divide(int, int);

void func(int(*fp)(int, int));

int main() {
    func(NULL); // func���� ���� ���� �� ����
    return 0;
}

int sum(int a, int b) { return a + b; }
int min(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; } // 0���� ������ ��� ����

void func(int(*fp)(int, int)) {
    int choice;
    printf("������ �����ϼ��� (1: ����, 2: ����, 3: ����, 4: ������): ");
    scanf("%d", &choice);

    // ���ÿ� ���� �Լ� ������ �Ҵ�
    switch (choice) {
    case 1: fp = sum; break;
    case 2: fp = min; break;
    case 3: fp = mul; break;
    case 4: fp = divide; break;
    default:
        printf("�߸��� �����Դϴ�.\n");
        return;
    }

    int a, b;
    printf("�� ���� ������ �Է��ϼ���: ");
    scanf("%d %d", &a, &b);

    int res = fp(a, b);
    printf("���: %d\n", res);
}
