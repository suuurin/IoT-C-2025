/* ���� ��� */
// if, switch 

#include <stdio.h> 

int main(void) {
	int num1, num2;
	num1 = 30, num2 = 21;

	if (num1 > num2) {
		printf("num1�� num2���� Ů�ϴ�.\n");
		printf("%d > % d \n", num1, num2);
	}
	// if�� ���� ������ �� ���̸� �߰�ȣ ��������
	if (num1 > num2)
		printf("%d > % d \n", num1, num2);

	int score = 82;
	if (score >= 90) printf("A����Դϴ� \n");
	else if (score >= 80) printf("B����Դϴ� \n");
	else if (score >= 70) printf("C����Դϴ� \n");
	else printf("����� ����Դϴ� \n");

	int num;
	printf("���ڸ� �Է����ּ��� (1~10) > ");
	scanf_s("%d", &num);

	switch (num) {
	case 1:
		printf("case1���Դϴ�.\n");
		break;
	case 2:
		printf("case2���Դϴ�.\n");
		break;
	case 3:
		printf("case3���Դϴ�.\n");

	case 5:
		printf("case5���Դϴ�.\n");
		break;
	default:
		printf("�ش��ϴ� case�� �����ϴ�. \n");

	// break ���� ������?
	// ���� case�� ��� �����
	// case 3 ����� case5���� ����
	}
}