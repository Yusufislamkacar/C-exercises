#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "main.h"

int main() {
		int i;

		do
		{
			i = getchar();
			putchar(i);
		} while (i != '.');

		putchar('\n');
		return(0);
	
	//strcat();
	//password();
	return 0;
}

void strcat()
{
	char firstname[15];
	char lastname[10];
	printf("What is your first name?");
	scanf("%s", firstname);
	printf("What is your last name?");
	scanf("%s", lastname);

	strcat(firstname, " ");
	strcat(firstname, lastname);
	printf("nice to meet you, %s", firstname);
}

void password()
{
	char password[] = "taco";
	char input[15];

	printf("password: ");
	scanf("%s", input);

	if (strcmp(input, password) == 0) {
		printf("password accepted.");
	}
	else {
		printf("access denited.");
	}
}
