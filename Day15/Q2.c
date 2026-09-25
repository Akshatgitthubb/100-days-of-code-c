/* Q30: Write a program to reverse a given number. */
#include <stdio.h>

int main() {
    int n, reverse = 0, digit;

    scanf("%d", &n);

    while(n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    printf("%d\n", reverse);

    return 0;
}
