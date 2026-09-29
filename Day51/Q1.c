/*
Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
*/

#include <stdio.h>
#include <stdlib.h>

int lowerBound(const int nums[], int n, int target) {
    int left = 0;
    int right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }

    return left;
}

int upperBound(const int nums[], int n, int target) {
    int left = 0;
    int right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= target)
            left = mid + 1;
        else
            right = mid;
    }

    return left;
}

int main(void) {
    int n, target;

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1, -1\n");
        return 0;
    }

    int *nums = malloc((size_t)n * sizeof(*nums));
    if (nums == NULL)
        return 1;

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            free(nums);
            return 1;
        }
    }

    if (scanf("%d", &target) != 1) {
        free(nums);
        return 1;
    }

    int first = lowerBound(nums, n, target);

    if (first == n || nums[first] != target) {
        printf("-1, -1\n");
    } else {
        int last = upperBound(nums, n, target) - 1;
        printf("First occurrence: %d at index %d\n", nums[first], first);
        printf("Last occurrence: %d at index %d\n", nums[last], last);
    }

    free(nums);
    return 0;
}
