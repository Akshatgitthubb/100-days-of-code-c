/* Q16: Write a program to input three numbers and find the largest among them using if-else. */
#include <stdio.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a >= b && a >= c)
        printf("%.2lf\n", a);
    else if(b >= a && b >= c)
        printf("%.2lf\n", b);
    else
        printf("%.2lf\n", c);

    return 0;
}
