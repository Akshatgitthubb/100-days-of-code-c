/* Q9: Write a program to calculate simple and compound interest for given principal, rate, and time. */
#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t, si, ci;

    scanf("%lf %lf %lf", &p, &r, &t);

    si = (p * r * t) / 100.0;
    ci = p * pow(1 + r / 100.0, t) - p;

    printf("Simple Interest = %.2lf\n", si);
    printf("Compound Interest = %.2lf\n", ci);

    return 0;
}
