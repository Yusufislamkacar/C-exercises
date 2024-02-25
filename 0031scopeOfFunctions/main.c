#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void scopeTest();
void scopeTestWithStaticVariable();

int main() {
	printf("first call:\n ");
	scopeTestWithStaticVariable();
	//scopeTest();
	printf("second call:\n ");
	scopeTestWithStaticVariable();
	//scopeTest();

}

void scopeTest() {

	int a = 0;
	printf("this is old value : %d\n", a);
	printf("Enter a new value: ");
	scanf("%d", &a);
	printf("this is new value: %d\n",a);

}
void scopeTestWithStaticVariable() {

	static int a;//static variables declare only once.
	printf("this is old value : %d\n", a);
	printf("Enter a new value: ");
	scanf("%d", &a);
	printf("this is new value: %d\n", a);

}