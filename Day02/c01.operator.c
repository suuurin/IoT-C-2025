/* ������ */

#include <stdio.h>
int main() {
	int res;
	int n = 15;
	// �� ������ &&, ||, !
	// -���̽�� �޸� and, or , not Ű���� ����
	// - &, | �� ���� ���� ��Ʈ �������̹Ƿ� ����
	printf("======��������======\n");
	res = (n < 10) && (n > 20);
	printf("res: %d\n", res);
	res = (n < 10) || (n > 20);
	printf("res: %d\n", res);
	res = !(n >= 30);
	printf("res: %d\n", res);
	printf("======����������======\n");

	// ���������� ++, --
	int num = 5;
	printf("num: %d\n", num);
	printf("�������� �� num: %d\n", ++num);	// num += 1 �� �� �� ���
	printf("�������� �� num: %d\n", num++);	// num ��� �� num += 1
	printf("num: %d\n", num);					// num�� 1 �������ִ� ���� Ȯ���� �� �ִ�. 
	// -- �� ���Ͽ���
	printf("======���׿�����======\n");
	// ���׿����� :?
	// ���� ? �� : ����
	// if(����) ��; else ������; �� �� �ٷ�

	int a = 8;
	int b = 45;
	res = a > b ? a : b;
	printf("a�� b �� �� ū ����: %d\n", res);
	printf("======��Ʈ������======\n");

	// ��Ʈ������ (&, |, ~, >>, <<)

	res = 3 & 11;
	printf("& res: %x\n", res);

	res = 3 | 11;
	printf("| res: %x\n", res);

	res = ~6;
	printf("~ res: %d\n", res);
	printf("======����Ʈ����======\n");

	char ch = 0x7f;					// 0b 0111 1111
	unsigned char uch = 0x7f;
	printf("ch: %x, uch: %x\n", ch, uch);

	char ch1 = 0x9f;				// 0b 1001 1111
	unsigned char uch1 = 0x9f;
	printf("ch1: %x, uch1: %x\n", ch1, uch1);

	ch1 >>= 1;						// 0b 1100 1111
	uch >>= 1;						// 0b 0100 1111
	printf("ch1: %x, uch1: %x\n", ch1, uch1);
	printf("======sizeof������======\n");

	// sizeof ������
	printf("char�� ũ��� %d\n", sizeof(char));
	printf("int�� ũ��� %d\n", sizeof(int));
	printf("float�� ũ��� %d\n", sizeof(float));
	printf("double�� ũ��� %d\n", sizeof(double));

	return 0;
}


