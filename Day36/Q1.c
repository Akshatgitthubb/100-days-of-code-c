/* Q71: Read and print a matrix. */
#include <stdio.h>

int main() {
    int a[20][20], rows, columns, i, j;

    scanf("%d %d", &rows, &columns);

    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++)
            printf("%d ", a[i][j]);

        printf("\n");
    }

    return 0;
}
