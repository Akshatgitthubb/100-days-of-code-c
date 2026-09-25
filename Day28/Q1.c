/* Q55: Write a program to print all the prime numbers from 1 to n. */
#include <stdio.h>

int main() {
    int n, num, i, prime;

    scanf("%d", &n);

    for(num = 2; num <= n; num++) {

        prime = 1;

        for(i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                prime = 0;
                break;
            }
        }

        if(prime)
            printf("%d ", num);
    }

    printf("\n");

    return 0;
}
