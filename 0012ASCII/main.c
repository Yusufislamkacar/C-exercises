#include <stdio.h>

int main() {

	char c;
	int i;
	float f;
	double d;
	char x;

	c = 'a';
	i = 1;
	f = 10.9;
	d = 20000.009;
	x = '\x0B';

	printf("%c\n", c);
	printf("%d\n", i);
	printf("%f\n", f);
	printf("%f\n", d);
	printf("%c\n", x);


	return 0;



}