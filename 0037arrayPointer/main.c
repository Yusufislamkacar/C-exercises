#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int array[5] = { 1,2,3,4,5 };
	int* p = array;

	printf("%p\n", p);
	printf("%d\n", *p);
	printf("%p\n", &array);//same printf("%p\n", array); 
	printf("%p\n", array);
	
}