#include <stdio.h>

int main(void) {
	const int num = 10;
	// num = 20;

	int num2 = 10;
	num2 = 20;
	int* pnum2 = &num2;
	*pnum2 = 30;
	printf("%d\n", num2);

	const int* pn2 = &num2;		// ������ ���(
								// ������ ������ ���� �������� ������ �����Ѵ�.
	int const* pn2 = &num2;		// ���� �ǹ�
	num2 = 0;
	//*pn2 = 100;		// �� ����� ���� �߻�
	pn2 = &num2;		// �̰� ����

	int num3 = 40;
	int* const pnum3 = &num3;	// ������ ���
								// �����ͺ����� ����Ű�� �ּ��� ������ �����Ѵ�.
	*pnum3 = 100;		// ����
	printf("%d\n", num3);
	//pnum3 = &num2;	// ���� �߻�


	// ������, ������ ��� ���� �Ұ����� ��� ����
	const int* const pn5 = &num2;
	//*pn5 = 100
	//pn5 = &num3
	// �� �� �Ұ���
	// num2�� ���� �����Ͽ� ������ ����
	num2 = 60;

	return 0;
}