#include <stdio.h>

// ����� �Լ��� ������ ������ main �Լ� ���� �Լ� ������ �� ��
// main �Լ� �Ʒ��� �Լ� ���Ǹ� �Ѵ�.

void func1();			// �Լ�����, �Լ����� 
void func2(int, int);	// �Լ�����, �Լ�����
int func3(int, int);	// �Լ�����, �Լ�����

int main() {
	func1();				// �Լ� ȣ��
	func2(10, 20);			// 10�� 20�� ���μ�
	printf("int func3(int, int), a + b = %d\n", func3(10, 20));
	return 0;
}

/*	func1()
	�Է°� ����� ���� �Լ�
	�Լ� �ȿ��� ����� ����Ѵ�.
*/
void func1() {			// �Լ� ����: �Լ��� ����� ���⿡ �ۼ��Ѵ�.
	int a = 10, b = 20;
	printf("void func1(), a + b = %d\n", a + b);
}
/*	func2()
	�Է��� �ִ� �Լ� */
void func2(int n1, int n2) {
	//n1�� n2 �� ��������
	printf("void func2(int, int), a + b = %d\n", n1 + n2);

}
/*	func3()
	�Է°� ����� �ִ� �Լ� */
int func3(int num1, int num2) {
	int res = num1 + num2;
	return res;
}

