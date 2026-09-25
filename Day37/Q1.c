/* Q73: Find the sum of each row of a matrix and store it in an array. */
#include <stdio.h>

int main() {
    int a[20][20], rowSum[20];
    int rows, columns, i, j;

    scanf("%d %d", &rows, &columns);

    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < rows; i++) {
        rowSum[i] = 0;

        for(j = 0; j < columns; j++)
            rowSum[i] += a[i][j];
    }

    for(i = 0; i < rows; i++)
        printf("%d ", rowSum[i]);

    printf("\n");
    return 0;
}
