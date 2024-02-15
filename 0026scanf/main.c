#include <stdio.h>

int main() {
	int scores[4];

	printf("Your first highest score: ");
	scanf_s("%d", &scores[0]);
	printf("Your second highest score: ");
	scanf_s("%d", &scores[1]);
	printf("Your third highest score: ");
	scanf_s("%d", &scores[2]);
	printf("Your forth highest score: ");
	scanf_s("%d", &scores[3]);

	puts("your scores:");
	printf("1->%d\n ",scores[0]);
	printf("2->%d \n", scores[1]);
	printf("3->%d \n", scores[2]);
	printf("4->%d \n", scores[3]);

}