#include <stdio.h>
#include "main.h"

int main() {


	return 0;
}

int Fibonacci()
{
	int fibo, nacci;

	fibo = 0;
	nacci = 1;

	do
	{
		printf("%d ", fibo);
		fibo += nacci;
		printf("%d ", nacci);
		nacci += fibo;
	} while (nacci < 10000000);

	putchar('\n');
	return 0;
}
