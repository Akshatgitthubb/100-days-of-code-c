/* Q42: Write a program to check if a number is a perfect number. */
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    for(i = 1; i <= n / 2; i++) {
        if(n % i == 0)
            sum += i;
    }

    if(n > 0 && sum == n)
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}
