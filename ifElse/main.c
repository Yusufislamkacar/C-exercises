#include <stdio.h>
#include <stdint.h>
#include "main.h"
int main() {
	


	//location2();
	//location();
    //whichbigger2();
	//calculateyourtax();
	//whichbigger();

		return 0;
}

void location2()
{
	int coordinate;

	printf("Enter your location:");
	scanf_s("%d", &coordinate);

	if ((coordinate >= -5) || (coordinate <= 5)) {
		puts("close enough");
	}
	else {
		puts("target is out of range");
	}
}

void location()
{
	int coordinate;

	printf("Enter your location:");
	scanf_s("%d", &coordinate);

	if ((coordinate >= -5) && (coordinate <= 5)) {
		puts("close enough");
	}
	else {
		puts("target is out of range");
	}
}

void whichbigger2()
{
	int firstnumber, secondnumber;

	printf("Enter first number: ");
	scanf_s("%d", &firstnumber);
	printf("Enter second number: ");
	scanf_s("%d", &secondnumber);

	if (firstnumber < secondnumber) printf("%d is bigger than %d", secondnumber, firstnumber);
	if (firstnumber > secondnumber) printf("%d is bigger than %d", firstnumber, secondnumber);
	if (firstnumber == secondnumber) printf("%d is equal to %d", firstnumber, secondnumber);
}

void calculateyourtax()
{
	uint32_t income;

	printf("Enter your total income:");
	scanf_s("%d", &income);

	if (income < 9525 && income >= 0) {
		printf("Your tax is 0!");
	}
	else if (income < 38701) {
		printf("Your tax is %f", (float)income * 12 / 100);
	}
	else if (income < 82500) {
		printf("Your tax is %f", (float)income * 22 / 100);
	}
	else {
		printf("Your tax is %f", (float)income * 32 / 100 + 1000);
	}
}

void whichbigger()
{
	int32_t firstNumber = 0;
	int32_t secondNumber = 0;

	printf("Enter first number:");
	scanf_s("%d", &firstNumber);
	printf("Enter second number:");
	scanf_s("%d", &secondNumber);

	if (firstNumber > secondNumber) {
		printf("Bigger number is %d", firstNumber);
	}
	else if (firstNumber == secondNumber) {
		printf("The numbers equal.");
	}
	else {
		printf("Bigger number is %d", secondNumber);
	}
}
