/* Q41: Write a program to swap the first and last digit of a number. */
#include <stdio.h>

int main() {
    int n, temp, first, last, divisor = 1, result;

    scanf("%d", &n);

    if(n < 0) {
        printf("Enter a positive number\n");
        return 0;
    }

    if(n < 10) {
        printf("%d\n", n);
        return 0;
    }

    last = n % 10;
    temp = n;

    while(temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    first = temp;

    result = n - first * divisor - last;
    result = result + last * divisor + first;

    printf("%d\n", result);

    return 0;
}
