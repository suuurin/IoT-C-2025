/* �迭�� ������ */

#include <stdio.h>
int main(void) {

	int ary[5];
	int* pa = &ary;

	*(pa + 0) = 10;		// ary[0] = 10�� ����
	printf("*pa: %d, ary[0]: %d\n", *pa, ary[0]);
	printf("pa: %d\n", pa);
	printf("pa + 1: %d\n", (pa + 1));

	*(pa + 1) = 20;		// ary[1] = 20�� ����
	printf("*pa: %d, ary[1]: %d\n", *(pa+1), ary[1]);
	printf("pa[1]: %d\n", pa[1]);	// [] == *( ): ������ �����
	return 0;
}