#include <stdio.h>
#include "main.h"

int main(){
	
	

	
	//MealPlan();
	//ErrMessage2();
	//ErrMessage();
	//calculateArea();

}

void MealPlan()
{
	char plan;

	puts("Meal plans: ");
	puts("A-> Breakfast, lunch and Dinner'\n\
B-> lunch and dinner\n\
C-> dinner");

	printf("Your choice: ");
	scanf_s("%c", &plan);

	switch (plan)
	{
	case 'a':
	case 'A':
		printf("Your meal: breakfast,");
	case 'b':
	case 'B':
		printf("lunch and ");
	case 'c':
	case 'C':
		printf("dinner");

	default:
		printf("What!");

	}
}

void ErrMessage2()
{
	char errCode;

	printf("Enter your error code(A-B-C): ");
	scanf_s("%c", &errCode);
	switch (errCode) {
	case 'A':
	case 'a':
		printf("Your pc dump.");
		break;
	case 'B':
	case 'b':
		printf("A lot of virus eat your pc.");
		break;
	case 'C':
	case 'c':
		printf("This is a big problem for you.");
		break;
	default:
		printf("I don't know this code!");
	}
}

void ErrMessage()
{
	int errCode;

	printf("Enter your error code(1-3): ");
	scanf_s("%d", &errCode);
	switch (errCode) {
	case 1:
		printf("Your pc dump.");
		break;
	case 2:
		printf("A lot of virus eat your pc.");
		break;
	case 3:
		printf("This is a big problem for you.");
		break;
	default:
		printf("I don't know this code!");
	}
}

void calculateArea()
{
	char type;
	float variable1;
	float variable2;
	float variable3;
	float pi = 3.14;

	printf("Area celculating program.\n\
Circle->c\n\
Triangle->t\n\
Rectangle->r\n\
Square->s\n\
Trapezoid->z\n");
	scanf_s("%c", &type);

	switch (type)
	{
	case'c':
		printf("Enter radius:");
		scanf_s("%f", &variable1);
		printf("\nArea:%.2f", variable1 * variable1 * pi);
		break;
	case 't':
		printf("Enter Base:");
		scanf_s("%f", &variable1);
		printf("\nEnter Height:");
		scanf_s("%f", &variable2);
		printf("\nArea:%f", variable1 * variable2 / 2);
		break;
	case 'r':
		printf("Enter lenght:");
		scanf_s("%f", &variable1);
		printf("\nEnter Height:");
		scanf_s("%f", &variable2);
		printf("\nArea:%f", variable1 * variable2);
		break;
	case 's':
		printf("Enter side:");
		scanf_s("%f", &variable1);
		printf("\nArea: %f", variable1 * variable1);
		break;
	case'z':
		printf("Enter base1:");
		scanf_s("%f", &variable1);
		printf("\nEnter base2:");
		scanf_s("%f", &variable2);
		printf("\nEnter Height:");
		scanf_s("%f", &variable3);
		printf("\nArea:%f", (variable1 + variable2) / 2 * variable3);
		break;

	default:
		printf("\nWrong input!");
		break;
	}
}
