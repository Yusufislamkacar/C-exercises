#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void insertingSort(int x[], int n);

int main() {
	int array[5];
	for (int i = 0; i < 5; i++) {
		printf("%d-> ", i+1);
		scanf("%d",&array[i]);
	}

	insertingSort(array, 5);

	for (int a = 0; a < 5; a++) {
		printf("%d ", array[a]);
	}

	return 0;
}
void insertingSort(int* x,int n) {
	int key,i;
	for (int j = 1; j < n; j++) {
		key = x[j];
		i = j - 1;
		while ((i > -1) && (x[i] > key)) {
			x[i + 1] = x[i];
			i = i - 1;
		}
		x[i + 1] = key;
	}


}