#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void scopeTestWithStaticVariable();

int a = 0;

int main() {

	printf("first call:\n ");
	scopeTestWithStaticVariable();
	printf("second call:\n ");
	scopeTestWithStaticVariable();

}


void scopeTestWithStaticVariable() {
	printf("this is old value : %d\n", a);
	printf("Enter a new value: ");
	scanf("%d", &a);
	printf("this is new value: %d\n", a);

}