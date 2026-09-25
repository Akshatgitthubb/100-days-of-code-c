/* Q57: Find the sum of array elements. */
#include <stdio.h>

int main() {
    int a[100], n, i;
    long long sum = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("%lld\n", sum);

    return 0;
}
