/* Q65: Search in a sorted array using binary search. */
#include <stdio.h>

int main() {
    int a[100], n, key;
    int low, high, mid, i, found = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = low + (high - low) / 2;

        if(a[mid] == key) {
            found = mid;
            break;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found != -1)
        printf("Element found at position %d\n", found + 1);
    else
        printf("Element not found\n");

    return 0;
}
