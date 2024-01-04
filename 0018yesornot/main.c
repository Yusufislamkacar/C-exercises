#include <stdio.h>
#include "main.h"

int main() {

	char choice;

	puts("Do you want continue?(y/n)");
	scanfBug();
	scanf_s("%c", &choice);

	if (choice == 'y') {
		puts("Are you sure?");
		
		scanfBug();
		scanf_s("%c", &choice);
		if (choice == 'y') {
			printf("You are honored.");
		}
		
		else if (choice == 'n') { printf(" OK,bye!"); }
		else { printf("You type wrong thing"); }

	}else if (choice == 'n') { printf(" OK,bye!"); }
	else { printf("You type wrong thing"); }

}

void scanfBug()
{
	while (getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
}

