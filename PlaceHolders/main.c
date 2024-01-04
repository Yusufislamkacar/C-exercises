#include <stdio.h>

int main() {

	printf("The value %d is an integer.\n", 78);
	printf("The value %f is an integer.\n", 78.911);
	printf("This is percent sign:%%\n");

	//wrong format
	printf("%f\n", 127);
	printf("%d\n", 3.1415926535);
	printf("%d\n", 122013);
	printf("%d\n", 0.00008);
	


	printf("these is correct formats:%d, %f, %d, %f", 127, 3.1415926535, 122013, 0.00008);


	printf("%d\n", 127);
	printf("%1.3f\n", 3.1415926535);
	printf("%d\n", 122013);
	printf("%1.4f\n", 0.00008);


	printf("The result is %f\n", 456.98 + 213.4);

	printf("%3.2f + %3.2f = %3.2f\n", 456.98, 213.4, 456.98 + 213.4);

	printf("The result is %d\n", 8 * 14 * 25);

	printf("%d * %d * %d = %d\n", 8, 14, 25, 8 * 14 * 25);

	printf("The total is %.1f\n", 16.0 + 17);// this is float. Wrong!

	printf("%d/%d=%f\n", 2, 5, 2 / 5);
	printf("%d/%d=%.1f\n", 2, 5, 2.0 / 5.0);


	return(0);
}