/* Q67: Insert an element in an array at a given position. */
#include <stdio.h>

int main() {
    int a[101], n, value, position, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d %d", &value, &position);

    if(position < 1 || position > n + 1) {
        printf("Invalid position\n");
        return 0;
    }

    for(i = n; i >= position; i--)
        a[i] = a[i - 1];

    a[position - 1] = value;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
