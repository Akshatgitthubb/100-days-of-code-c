/* Q74: Find the transpose of a matrix. */
#include <stdio.h>

int main() {
    int a[20][20], rows, columns, i, j;

    scanf("%d %d", &rows, &columns);

    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++)
            scanf("%d", &a[i][j]);

    for(j = 0; j < columns; j++) {
        for(i = 0; i < rows; i++)
            printf("%d ", a[i][j]);

        printf("\n");
    }

    return 0;
}
