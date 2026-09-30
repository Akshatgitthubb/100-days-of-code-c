/*
Q102: Given a sorted array and an integer x, print the index of the first
element greater than or equal to x. Print -1 if no such element exists.
*/

#include <stdio.h>
#include <stdlib.h>

int lowerBound(const int arr[], int n, int x) {
	int left = 0;
	int right = n;

	while (left < right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] < x)
			left = mid + 1;
		else
			right = mid;
	}

	return left;
}

int main(void) {
	int n, x;

	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("-1\n");
		return 0;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
	if (arr == NULL)
		return 1;

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			return 1;
		}
	}

	if (scanf("%d", &x) != 1) {
		free(arr);
		return 1;
	}

	int index = lowerBound(arr, n, x);
	printf("%d\n", index == n ? -1 : index);

	free(arr);
	return 0;
}
