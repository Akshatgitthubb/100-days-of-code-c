/* Q43: Write a program to check if a number is a strong number. */
#include <stdio.h>

int main() {
    int n, original, temp, digit, i;
    int sum = 0, factorial;

    scanf("%d", &n);

    if(n < 0) {
        printf("Not a Strong Number\n");
        return 0;
    }

    original = n;
    temp = n;

    do {
        digit = temp % 10;
        factorial = 1;

        for(i = 1; i <= digit; i++)
            factorial *= i;

        sum += factorial;
        temp /= 10;

    } while(temp != 0);

    if(sum == original)
        printf("Strong Number\n");
    else
        printf("Not a Strong Number\n");

    return 0;
}
