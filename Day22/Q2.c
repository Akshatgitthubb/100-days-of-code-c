/* Q44: Find the sum of the series:
   1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
*/
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    scanf("%d", &n);

    if(n >= 1)
        sum = 1.0;

    for(i = 2; i <= n; i++) {
        sum += (double)(2 * i - 1) / (2 * i);
    }

    printf("%.2f\n", sum);

    return 0;
}
