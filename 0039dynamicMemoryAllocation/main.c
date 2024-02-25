#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

	char* input;
	int len;

	input = (char*)malloc(sizeof(char) * 1024);//allocate
	if (input == NULL) {
		printf("something went wrong!");
		return;
	}

	printf("type something long and boring: \n ");
	fgets(input, 1023, stdin);

	len = strlen(input);
	input = realloc(input, sizeof(char) * len + 1);//re-allocate
	if (input == NULL) {
		printf("something went wrong!");
		return;
	}
	puts("memory re-allocated");

	  puts("you wrote: ");
		printf("%s", input);
	

}