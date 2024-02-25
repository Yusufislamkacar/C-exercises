#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {

	enum{buffer,SUN,MON,TUE,WED,THU,FRI,SAT};

	int day;
	printf("type day(1-7):");
	scanf("%d", &day);

	if (day < 1 || day>7) {

		puts("Invalid input.");
		return 0;
	}
	else {

		switch (day)
		{
		case SUN:
			puts("Sunday");
			break;
		case MON:
			puts("Monday");
			break;
		case TUE:
			puts("Tuesday");
			break;
		case WED:
			puts("Wednesday");
			break;
		case THU:
			puts("Thursday");
			break;
		case FRI:
			puts("Friday");
			break;
		case SAT:
			puts("Saturday");
		}

	}

}