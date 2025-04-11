/*
	strlen - ���ڿ� ���̸� ���
	strcat - ���ڿ��� ���̴� �Լ�
	strcmp - ���ڿ� ��ü ���ϰ�, ������ �� ����� ��ȯ�ϴ� �Լ�
*/

#include <stdio.h>

int main() {
	
	//===== strlen =====
	char str[100] = "apple";
	printf("(strlen) str ���ڿ� ����: %d\n", strlen(str));
	printf("=================================\n");
	
	//===== strcat =====
	char str2[100] = "apple";

	strcat(str, "banana");			// "banana" ��ü ����
	printf("(strcat) str: %s\n", str);

	strncat(str, "orange", 3);		// �� 3���� "ora"�� �߰� 
	printf("(strncat) str: %s\n", str);
	printf("=================================\n");


	//===== strcmp =====
	char str3[100] = "apple";
	char str4[100] = "orange";

	/* str3�� �������� ���� ������ -1 ��ȯ, str4�� ���� ������ 1 ��ȯ, ������ 0�� ��ȯ */
	if (strcmp(str3, str4) > 0) printf("%s\n", str3);
	else printf("%s\n", str4);

	strncmp(str3, str4, 3);

	return 0;


}