/* Q17: Write a program to find the roots of a quadratic equation and categorize them. */
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0) {
        printf("Not a quadratic equation\n");
        return 0;
    }

    d = b*b - 4*a*c;

    if(d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Real and Distinct\n");
        printf("%.2lf %.2lf\n", r1, r2);
    }
    else if(d == 0) {
        r1 = -b / (2*a);
        printf("Real and Equal\n");
        printf("%.2lf %.2lf\n", r1, r1);
    }
    else {
        printf("Complex Roots\n");
    }

    return 0;
}
