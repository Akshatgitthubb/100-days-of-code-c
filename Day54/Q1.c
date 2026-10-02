/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/

#include <stdio.h>

int main(void) {
	int n;

	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("-1\n");
		return 0;
	}

	long long target = (long long)n * (n + 1) / 2;
	int left = 1;
	int right = n;
	int pivot = -1;

	while (left <= right) {
		int middle = left + (right - left) / 2;
		long long square = (long long)middle * middle;

		if (square == target) {
			pivot = middle;
			break;
		}
		if (square < target)
			left = middle + 1;
		else
			right = middle - 1;
	}

	printf("%d\n", pivot);
	return 0;
}
