/* Q33: Write a program to check if a number is an Armstrong number. */
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp, digit, digits = 0;
    int sum = 0;

    scanf("%d", &n);

    if(n < 0) {
        printf("Not Armstrong Number\n");
        return 0;
    }

    original = n;
    temp = n;

    do {
        digits++;
        temp /= 10;
    } while(temp != 0);

    temp = n;

    do {
        digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    } while(temp != 0);

    if(sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");

    return 0;
}
