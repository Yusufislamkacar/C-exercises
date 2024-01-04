#include <stdio.h>

int main() {

	char firstName[15];
	char lastName[15];

	printf("What is your firstname? ");
	fgets(firstName,15 , stdin);

	printf("What is your lastname? ");
	fgets(lastName, 15, stdin);

	printf("Nice to meet you %5s %s ", firstName, lastName);


}