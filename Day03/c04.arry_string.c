#include <stdio.h>

int main(void) {
	char str[100] = "banana";
	char str2[5] = "apple";

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);
	/* ��°�� */
	// str: banana
	//str2: apple���������������������� ? ? ?
	// ���ڿ� + 1 ��ŭ �迭ũ�� �������ֱ� (null���� ����)

	char str3[10] = { 'o', 'r', 'a', 'n', 'g', 'e' };
	// ���� �ϳ��ϳ� ���� ������ null ���� ���� �־�� �Ѵ�
	// ��, c������ ���ڿ� ���� �ݵ�� null ���ڰ� �־�� ��
	printf("str3: %s\n", str3);
	printf("str3[6]: %s\n", str3[6]);
	
	char str4[4];
	str4[0] = 'a';
	str4[1] = 'b';
	str4[2] = 'c';
	printf("str4: %s\n", str4);
	/* ��� ��� */
	//str4: abc������������������������ ? ?
	// null ���� ������ ���������� ��¿���
	// �ϳ��ϳ� ���� �־��� ��쿡�� null ���� ���� �Է������ ��
	str4[3] = NULL;	 // \0
	printf("str4: %s\n", str4);


	// ũ�Ⱑ ����� �迭���� ������ ���� ��� ó���ұ�?
	printf("str[50]: %s\n", str[50]);	// ������ ������ NULL ���ڷ� ä���.

	// ���ڿ��� ���Կ����� �ȵ�
	// str = str2;
	//strcpy �Լ� ����Ͽ� �����ذ�
	strcpy(str, str3);
	printf("str: %s\n", str);

	strcpy(str, "dog");
	printf("str: %s\n", str);

	str[0] = 'D';
	printf("str: %s\n", str);
	// str: log �� ..? ��..?
	// �� "D" �� ���� ���� 'D'�� ����

	return 0;

}