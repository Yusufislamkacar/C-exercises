#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* ConvertBinary(unsigned char input);

int main() {
	unsigned int input1,input2;
	printf("type first number between 0 to 255: ");
	scanf("%d", &input1);
	printf("type second number between 0 to 255: ");
	scanf("%d", &input2);

	unsigned int xor = input1 ^ input2;
	ConvertBinary(input1);
	ConvertBinary(input2);
	ConvertBinary(xor);

}

void * ConvertBinary(unsigned char input) {
 unsigned char ret[9];
 int i;
	for ( i = 0; i < 8; i++) {
		ret[i] = (input & 0x80) ? '1' : '0';
		input <<= 1;
		printf("%s", ret[i]);
	}
	ret[i] = '\0';
}