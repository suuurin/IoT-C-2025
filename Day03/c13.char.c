#include <stdio.h>
/* ��.�ҹ��� ��ȯ */
int main(void) {
	// �ƽ�Ű �ڵ带 �̿�
	// A: 65 ~ Z: 90
	// a: 97 ~ z: 122
	char ch1; 
	char ch2 = 'A';
	if ((ch2 >= 'A') && ch2 <= 'Z') {
		ch1 = ch2 + ('a' - 'A');
	}
	printf("�빮��: %c", ch2);
	printf("�ҹ���: %c", ch1);


}