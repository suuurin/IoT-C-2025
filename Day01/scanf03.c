//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    // �̸�, ���� �Է¹ް� ����ϱ�.
//
//    char name[50];  // �̸��� ������ �迭
//    int age;        // ���̸� ������ ����
//
//    // �Է� �ޱ�
//    printf("�̸��� ���̸� �Է��ϼ���: ");
//    scanf("%s %d", &name, &age);
//
//    // �Է��� ���� ���
//    printf("\n%s, %d���Դϴ�.", name, age);
//
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ����, �̸� �Է¹ް� ����ϱ�
	int age;
	char name[50];

	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);

	printf("�̸��� �Է��ϼ���: ");
	scanf_s("%s", name);

	printf("\n�Է¹��� ���̿� �̸��� %d, %s �Դϴ�.", age, name);

	return 0;

}