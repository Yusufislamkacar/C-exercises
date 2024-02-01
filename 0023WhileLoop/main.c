#include <stdio.h>
#include "main.h"

int main() {

	//BasicWhile();
	halfstep();
}

void BasicWhile()
{
	int x;
	x = 1;

	while (x < 10) {

		printf("%d.line\n", x);
		x++;
	}
}

int halfstep() {

	float halfstep;

	halfstep = -5;
	while (halfstep <= 5) {
		printf("number: %.1f\n", halfstep);
		halfstep += 0.5;
	}
	return 0;
}