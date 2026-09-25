/* Q34: Write a program to check if a number is prime. */
#include <stdio.h>

int main() {
    int n, i, prime = 1;

    scanf("%d", &n);

    if(n < 2)
        prime = 0;
    else {
        for(i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if(prime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
