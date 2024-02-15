#include <stdio.h>
#include <stdint.h>


int main() {

	int32_t number;
	
	printf("Enter a integer value: ");

	scanf("%d", &number);
	printf("Setting 4th and 7th-bit position:\n");
	printf("%d |(4-7): %d", number, (number | 0x90));



	//Bitwise1();
	return 0;
}

void Bitwise1()
{
	int first, second;

	printf("enter two integer value: ");
	scanf("%d %d", &first, &second);

	printf("%d AND(&) %d: %d\n", first, second, (first & second));
	printf("%d OR(|)  %d: %d\n", first, second, (first | second));
	printf("%d XOR(^) %d: %d\n", first, second, (first ^ second));
	printf("%d NOT(~): %d", first, (~first));
	printf("%d NOT(~): %d", second, (~second));
}
