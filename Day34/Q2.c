/* Q68: Delete an element from an array. */
#include <stdio.h>

int main() {
    int a[100], n, position, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &position);

    if(position < 1 || position > n) {
        printf("Invalid position\n");
        return 0;
    }

    for(i = position - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
