/*
Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;

	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("-1\n");
		return 0;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
	if (arr == NULL)
		return 1;

	long long total = 0;
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			return 1;
		}
		total += arr[i];
	}

	long long leftSum = 0;
	int pivotIndex = -1;
	for (int i = 0; i < n; i++) {
		if (leftSum == total - leftSum - arr[i]) {
			pivotIndex = i;
			break;
		}
		leftSum += arr[i];
	}

	printf("%d\n", pivotIndex);
	free(arr);
	return 0;
}
