#include <stdio.h>
/* ������ */
/*
* ������ ����: �ּҸ� ������ �� �ִ� ����
* ũ��: 32bit - 4byte/ 64bit - 8byte
* ������ ������ �ڷ����� ���� �޶����� �ʴ´� �ּ��� ũ�Ⱑ �����ϱ� ����
*/
int main(void) {
	// int p;		// int�� ���� ����
	// int* p;		// int�� ������ ���� ����
	// char* pc;	// char�� ������ ���� ����
	// ������ ���� ���𿡼� *�� ������ ������ ��Ÿ���� ��. �ƹ��� ��� ����
	// double * pd;
	// double *pd;
	// double* pd;
	// *�� ��ġ�� ������� 

	int num = 10;
	printf("num�� �ּ�: %p\n", &num);
	printf("num�� ��: %d\n", num);
	int* p = &num;		// num�� �ּҰ��� int�� �����ͺ����� p�� ����
	printf("�����ͺ��� p�� ����� ��: %p \n", p);
	printf("������ ����p�� ����Ű�� �ִ� ��: %d\n", *p);		// ���⼭ *�� �������� ������
	
	num += 1;
	printf("num :%d, *p: %d\n", num, *p);
	*p += 1;
	printf("num :%d, *p: %d\n", num, *p);

	// static ����
	//������/ ������

	return 0;
}