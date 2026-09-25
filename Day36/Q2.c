/* Q72: Find the sum of all elements in a matrix. */
#include <stdio.h>

int main() {
    int a[20][20], rows, columns, i, j;
    long long sum = 0;

    scanf("%d %d", &rows, &columns);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("%lld\n", sum);

    return 0;
}
