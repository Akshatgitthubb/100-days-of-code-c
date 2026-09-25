/* Q79: Perform diagonal traversal of a matrix. */
#include <stdio.h>

int main() {
    int a[20][20];
    int rows, columns, i, j, sum;

    scanf("%d %d", &rows, &columns);

    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++)
            scanf("%d", &a[i][j]);

    for(sum = 0; sum <= rows + columns - 2; sum++) {
        for(i = 0; i < rows; i++) {
            j = sum - i;

            if(j >= 0 && j < columns)
                printf("%d ", a[i][j]);
        }
    }

    printf("\n");
    return 0;
}
