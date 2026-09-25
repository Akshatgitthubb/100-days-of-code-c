/* Q75: Add two matrices. */
#include <stdio.h>

int main() {
    int a[20][20], b[20][20];
    int rows, columns, i, j;

    scanf("%d %d", &rows, &columns);

    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++)
            printf("%d ", a[i][j] + b[i][j]);

        printf("\n");
    }

    return 0;
}
