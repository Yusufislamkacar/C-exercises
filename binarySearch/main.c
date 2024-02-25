#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binarySearch(int* SArray[], int element);

int main() {

	int numbers[7] = { 15,30,55,77,91,158,'\0'};
	if (binarySearch(numbers, 0, 6, 15) == 0) { printf("not found"); }
}

int binarySearch(int* SArray[], int start, int end, int element) {
	int temp;
	if (element < SArray[(start + end) / 2]) {
		temp = end;
		end = (start + end) / 2; 
		if (temp == end) { return 0; }
		binarySearch(SArray, start, end, element);

	}
	else if (element > SArray[(start + end) / 2]) {
		temp = start;
		start = (start + end) / 2;	
		if (temp == start) { return 0; }
		binarySearch(SArray, start, end, element);
		
	}
	else if (element == SArray[(start + end) / 2]) {
		printf("%d -->found.\n", element);
	}
	else { printf("element not found.\n"); }
	
	

}