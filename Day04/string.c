/*
	���ڿ�
	scanf, gets (������� �Է� ����)
	stdin - ǥ�� ��� ����(��Ʈ��)
	
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//========string 1==========
	char str[100] = "orange";

	printf("%s\n", str);
	printf("%s\n", "orange");
	printf("%p\n", "ornage");
	printf("%c\n", *"orange");
	printf("%c\n", *("orange"+1));
	printf("%c\n", "orange"[2]);
	printf("============================\n");

	

	//========string 2==========
	// ���ڿ� ��� = �ּ�
	char* ps1 = "orange";
	printf("ps�� ����Ű�� ��: %s\n", ps1);
	ps1 = "banana";
	printf("ps�� ����Ű�� ��: %s\n", ps1);
	printf("============================\n");


	//========string 3==========
	
	char str3[100];

	//printf("���ڿ� �Է� >> ");
	//scanf("%s", str3);

	//printf("���ڿ�: %s", str3);
	//scanf("%s\n", str3);
	//printf("���� ���ڿ�: %s\n", str3);

	///* gets */
	//printf("������ ������ �Է� >> ");
	//gets(str3);
	//printf("�Է� ���ڿ�: %s\n", str3);

	/* fgets */
	printf("������ ������ �Է� >> ");
	fgets(str3, sizeof(str3), stdin);
	printf("�Է� ���ڿ�: %s", str3);
	printf("============================\n");

	//========string 4==========
	/* puts, fputs - ���� ��� �Լ� */

	char str4[100] = "Delmonte orange";
	char* ps2 = "banana";

	printf("%s\n", str);
	puts(str4);					// �ڵ� ����
	fputs(str4, stdout);		// ���� �ȵ�
	puts(ps2);
	fputs(ps2, stdout);

	return 0;

}