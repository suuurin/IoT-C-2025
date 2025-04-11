/*
	void pointer
*/
#include <stdio.h>

int main() {

	int n = 10;
	double db = 3.14;

	//int pn = &n;
	//double* pdb = &db;
	void* p;

	*(int*)p = &n;
	printf("*p: %d\n", *(int*)p);

	p = &db;
	printf("*p: %.11f\n", *(double*)p);

	return 0;
}