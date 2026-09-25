/* Q61: Search for an element in an array using linear search. */
#include <stdio.h>

int main() {
    int a[100], n, key, i, found = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("Element found at position %d\n", found + 1);
    else
        printf("Element not found\n");

    return 0;
}
