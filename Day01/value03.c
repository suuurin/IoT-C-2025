/* 실수 자료형 */
#include <stdio.h>

int main() {
	float f = 1.12345678912345;
	double d = 1.12345678912345;

	printf("float: %.15f\n", f);
	printf("double: %.15lf\n", d);

	return 0;
}