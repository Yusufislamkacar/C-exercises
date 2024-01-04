#include <stdio.h>


int he() {
	
	char name[10];

	printf("Who are you? ");
	fgets(name, 10, stdin);
	printf("Glad to meet you %s", name);


	return 0;


}