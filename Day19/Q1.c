/* Q37: Write a program to find the LCM of two numbers. */
#include <stdio.h>

int main() {
    int a, b, x, y, temp, gcd;
    long long lcm;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while(y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    if(a == 0 || b == 0)
        lcm = 0;
    else {
        lcm = ((long long)a / gcd) * b;
        if(lcm < 0)
            lcm = -lcm;
    }

    printf("%lld\n", lcm);

    return 0;
}
