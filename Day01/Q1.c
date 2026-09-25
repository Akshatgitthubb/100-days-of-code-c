/*
Q1: Write a program to input two numbers and display their sum.
*/
#include <stdio.h>

int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Sum = %.2f\n", a + b);
    return 0;
}
