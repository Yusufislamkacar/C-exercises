#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Sort(int arr[], int start, int end);
void Merge(int arr[], int start, int mid, int end);

int main() {

	int array[5];
	int length = 5;
	for (int i = 0; i < 5; i++) {
		printf("%d-> ", i + 1);
		scanf("%d", &array[i]);
	}
	printf("old array\n");
	for (int i = 0; i < 5; i++) printf(" %d", array[i]);
	Sort(array, 0, length-1);
	printf("\n");
	printf("new array\n");
	for (int i = 0; i < 5; i++) printf(" %d", array[i]);

}
void Sort(int arr[], int start, int end) {
	if (start < end) {

		int mid = (start + end) / 2;
		Sort(arr, start, mid);
		Sort(arr, mid + 1, end);
		Merge(arr, start, mid, end);
	}
}
void Merge(int arr[], int start, int mid, int end) {
    
	int temp[5];
	int i = start;
	int k = start;
	int j = mid+1;
	while ((i<=mid)&&(j<=end))
	{
		if (arr[i] <= arr[j]) temp[k++] = arr[j++];
		else temp[k++] = arr[j++];
	}
	while (i <= mid) temp[k++] = arr[i++];
	while (j <= end) temp[k++] = arr[j++];
	
	for (i = start; i <= end; i++) {
		arr[i] = temp[i];
	}

}