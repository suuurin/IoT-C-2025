/*
	strcpy - ���ڿ� ���� �Լ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = "orange";
	char str2[100] = "apple";
	char* ps = "apple";

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);

	strcpy(str, str2);			// strcpy(����, ����)
	printf("-���� ��-\n");
	printf("str: %s\n", str);
	printf("str2: %s\n", str2);

	strcpy(str, "banana");
	printf("str: %s\n", str);

	strcpy(str, ps);
	printf("str: %s\n", str);

	// strcpy(ps, str2);			// ps: �迭�� �������� �ʾұ⿡, ������ ���� X
	// printf("str: %s", ps);		
	// ps�� ���ڿ� ���ͷ� "apple"�� �ּҸ� ����Ű�� ������, �ش� �޸𸮴� ������ �� ����.

	strncpy(str, "abcd", 3);		// ���� �ּҺ��� ������ ���ڰ����� ������ �� �ִ�.
	printf("%s\n", str);

	return 0;
}
