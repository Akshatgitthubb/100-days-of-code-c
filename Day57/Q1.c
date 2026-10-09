/*Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
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
	int *previousGreater = malloc((size_t)n * sizeof(*previousGreater));
	int *stack = malloc((size_t)n * sizeof(*stack));
	if (arr == NULL || previousGreater == NULL || stack == NULL) {
		free(arr);
		free(previousGreater);
		free(stack);
		printf("-1\n");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			free(previousGreater);
			free(stack);
			printf("-1\n");
			return 0;
		}
	}

	int top = -1;
	for (int i = 0; i < n; i++) {
		while (top >= 0 && arr[stack[top]] <= arr[i])
			top--;

		previousGreater[i] = top >= 0 ? arr[stack[top]] : -1;
		stack[++top] = i;
	}

	for (int i = 0; i < n; i++)
		printf("%d%c", previousGreater[i], i == n - 1 ? '\n' : ' ');

	free(arr);
	free(previousGreater);
	free(stack);
	return 0;
}