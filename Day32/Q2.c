/* Q64: Find the digit that occurs the most times in an integer number. */
#include <stdio.h>

int main() {
    long long n;
    int frequency[10] = {0};
    int digit, i, maxDigit = 0;

    scanf("%lld", &n);

    if(n < 0)
        n = -n;

    if(n == 0)
        frequency[0] = 1;

    while(n > 0) {
        digit = n % 10;
        frequency[digit]++;
        n /= 10;
    }

    for(i = 1; i < 10; i++) {
        if(frequency[i] > frequency[maxDigit])
            maxDigit = i;
    }

    printf("%d\n", maxDigit);

    return 0;
}
