#include <stdio.h>
/* ��.�ҹ��� ��ȯ ���α׷� */

//	1. ���� �ϳ� �Է¹���
//	2. �빮���� ��� �ҹ��� ����, �ҹ����� ��� �빮�� ���� 
//	����) A: 65 ~ Z: 90
//		  a: 97 ~ z: 122 

char trans_alpha(char);

int main(void) {
	char alph[10];	// ���� �Է¹��� ����
	char res = 0;
	while (1)
	{
		


		printf("���ڸ� �ϳ� �Է����ּ��� > ");
		scanf_s("%s", alph, 10);
		// ���� �߻� scanf_s ���� ������ ���ڷ� ũ�⸦ �����ؾ� �ϴµ� sizeof()�� �ȵ�
		/* ���ڿ� quit �Է¹����� �Է� ����ǵ��� */
		if (alph == 'quit')
		{
			printf("���α׷� �����մϴ�.");
			break;
		}
		while (getchar() != '\n');		// �Է¹��� ���� ����
		printf("��ȯ���: %c\n\n", trans_alpha(alph));
	}

	return 0;
}

/* ��ҹ��� ��ȯ �Լ� */
char trans_alpha(char* alph)
{
	const int TRANS_ALPH = 'a' - 'A';
	char res = 0;
	if (('a' <= alph[0]) && ('z' >= alph[0]))	// �ҹ����̸�
	{
		res = alph[0] - TRANS_ALPH;
	}
	else if (('A' <= alph[0]) && ('Z' >= alph[0]))	// �빮���̸� 
	{
		res = alph[0] + TRANS_ALPH;
	}

	return res;
}