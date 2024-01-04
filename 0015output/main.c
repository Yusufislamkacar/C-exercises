#include <stdio.h>

int main() {
	
	putchar('Y');
	putchar('\n');
	putchar(78);
	putchar('\n');
	putchar('0x99');

	putc('\n', stdout);
	putc('Y',stdout);
	putc('\n', stdout);
	putc(78, stdout);
	putc('\n',stdout);
	putc('0x99', stdout);



	return 0;
}