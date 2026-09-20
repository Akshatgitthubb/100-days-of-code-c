/*
 * Name : Akshat Mittal
 * Sap ID : 590038005
 * Day : 02    Question : 4
 * Date : 11/08/2026
 *
 * PROBLEM STATEMENT: Write question here
 * Q4: Write a program to calculate the area and circumference of a circle given its radius.
 */

#include <stdio.h>

int main(void)
{
	const double pi = 3.14159;
	double radius;

	scanf("%lf", &radius);

	printf("Area=%.2f, Circumference=%.2f", pi * radius * radius, 2 * pi * radius);

	return 0;
}


