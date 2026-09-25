/* Q58: Find the maximum and minimum element in an array. */
#include <stdio.h>

int main() {
    int a[100], n, i, maximum, minimum;

    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid array size\n");
        return 0;
    }

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    maximum = minimum = a[0];

    for(i = 1; i < n; i++) {

        if(a[i] > maximum)
            maximum = a[i];

        if(a[i] < minimum)
            minimum = a[i];
    }

    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);

    return 0;
}
