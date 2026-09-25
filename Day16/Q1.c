/* Q31: Write a program to take a number as input and print its equivalent binary representation. */
#include <stdio.h>

int main() {
    unsigned int n;
    int binary[32];
    int i = 0, j;

    scanf("%u", &n);

    if(n == 0) {
        printf("0\n");
        return 0;
    }

    while(n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }

    for(j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);

    printf("\n");
    return 0;
}
