#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b, c;

	a = 1; b = 2; c = 3;

	int* p;
	p = &a;
	printf("p: \t %d \t 0x%p\n" ,*p, p);
	p = &b;
	printf("p: \t %d \t 0x%p\n", *p, p);
	p = &c;
	printf("p: \t %d \t 0x%p\n", *p, p);

}