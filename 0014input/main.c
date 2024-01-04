
#include <stdio.h> 

int main() {
	
	/*int c;

	printf("I waiting for a character:\n");
	c = getchar();
	puts("I waited for %c character",c);*/


	/*int r;

	puts("I waiting for a character:");
	r = getchar();
	printf("I waited for %c character.ASCII code is %d\n", r,r);*/


	//int x;
	//int y;
	//int z;

	//x = getchar();
	//y = getchar();
	//z = getchar();
	//printf("%c%c%c", x, y, z);


	//int m;

	//m = getc(stdin);//same getchar();
	//printf("%c", m);

	//char firstname[15];

	/*printf("type your firstname:");
	scanf("%s", &firstname); \\scanf guvenli degil hatasi, scanf_s string ile calismiyor.
	printf("pleased to meet your, %s", firstname);*/


	/*int fav;
	printf("type your favorite number:\n");
	scanf_s("%d",&fav);
	printf("%d is my favorte number too.\n", fav);*/


	/*float fav2;

	printf("type your favorite number:\n");
	scanf_s("%f", &fav2);
	printf("%f is my favorte number too.\n", fav2);*/


	char name[10];

	printf("Who are you? ");
	fgets(name, 10, stdin);
	printf("Glad to meet you, %s.\n", name);

	return 0;
}