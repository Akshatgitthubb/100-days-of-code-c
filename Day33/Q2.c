/* Q66: Insert an element in a sorted array at the appropriate position. */
#include <stdio.h>

int main() {
    int a[101], n, value, i, position;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &value);

    position = n;

    for(i = 0; i < n; i++) {
        if(value <= a[i]) {
            position = i;
            break;
        }
    }

    for(i = n; i > position; i--)
        a[i] = a[i - 1];

    a[position] = value;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
