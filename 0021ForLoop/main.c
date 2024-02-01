#include <stdio.h>
#include "main.h"


int main(){
	
	for (char i = 'A'; i <= 'Z'; i++) {
		printf("%3c",i);

	}
	printf("\n");

	for (char i = 'A'; i <= 'Z'; i++) {
		printf("%2d ",i);

	}
	printf("\n");


	for (char i = 'Z'; i >= 'A'; i--) {
		printf("%2d ", i);
	}

	//ForLoop();
	return 0;	
}

void ForLoop()
{
	for (int i = 0; i < 10; i++) {
		puts("Puts function work.");

	}
}
