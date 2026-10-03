/*
Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("-1\n");
		return 0;
	}

	int *nums = malloc((size_t)n * sizeof(*nums));
	if (nums == NULL) {
		printf("-1\n");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nums[i]) != 1) {
			free(nums);
			printf("-1\n");
			return 0;
		}
	}

	int candidate = nums[0];
	int balance = 0;
	for (int i = 0; i < n; i++) {
		if (balance == 0)
			candidate = nums[i];
		balance += nums[i] == candidate ? 1 : -1;
	}

	int count = 0;
	for (int i = 0; i < n; i++)
		count += nums[i] == candidate;

	printf("%d\n", count > n / 2 ? candidate : -1);
	free(nums);
	return 0;
}
