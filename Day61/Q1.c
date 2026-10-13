/*Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    if ((size_t)n > (size_t)-1 / sizeof(int)) {
        printf("-1\n");
        return 0;
    }

    int *arr = malloc((size_t)n * sizeof(*arr));
    int *deque = malloc((size_t)n * sizeof(*deque));
    if (arr == NULL || deque == NULL) {
        free(arr);
        free(deque);
        printf("-1\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            free(deque);
            printf("-1\n");
            return 0;
        }
    }

    int k;
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        free(arr);
        free(deque);
        printf("-1\n");
        return 0;
    }

    int front = 0;
    int back = 0;
    for (int i = 0; i < n; i++) {
        while (front < back && deque[front] <= i - k) {
            front++;
        }

        if (arr[i] < 0) {
            deque[back++] = i;
        }

        if (i >= k - 1) {
            if (i > k - 1) {
                printf(" ");
            }
            printf("%d", front < back ? arr[deque[front]] : 0);
        }
    }
    printf("\n");

    free(arr);
    free(deque);
    return 0;
}