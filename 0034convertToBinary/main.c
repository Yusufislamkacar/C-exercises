#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void *ConvertBinary(unsigned char input);

int main() {

	ConvertBinary(85);

}

void *ConvertBinary(unsigned char input) {

	for(int i=0;i<8;i++){
		printf("%c", (input & 0x80) ? '1' : '0');
		input <<= 1;
	}
}