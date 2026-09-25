/* Q45: Find the sum of the series:
   2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
*/
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (double)(2 * i) / (4 * i - 1);
    }

    printf("%.2f\n", sum);

    return 0;
}
