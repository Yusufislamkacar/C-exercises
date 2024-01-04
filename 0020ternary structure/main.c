#include <stdio.h>
#include "main.h"

int main() {
	
	//FindLarger();
	return 0;
}

void FindLarger()
{
	int a, b, larger;

	printf("Enter first value: ");
	scanf_s("%d", &a);
	printf("Enter second value: ");
	scanf_s("%d", &b);

	larger = (a < b) ? b : a;
	printf("%d is larger", larger);
}
