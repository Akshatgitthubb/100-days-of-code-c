/* Q69: Find the second largest element in an array. */
#include <stdio.h>
#include <limits.h>

int main() {
    int a[100], n, i;
    int largest = INT_MIN;
    int second = INT_MIN;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    if(second == INT_MIN)
        printf("Second largest element does not exist\n");
    else
        printf("%d\n", second);

    return 0;
}
