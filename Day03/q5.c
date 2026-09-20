/*
 * Name : Akshat Mittal
 * Sap ID : 590038005
 * Day : 03    Question : 5
 * Date : 12/08/2026
 *
 * PROBLEM STATEMENT: 
 *Q5: Write a program to convert temperature from Celsius to Fahrenheit.

 */

#include <stdio.h>

int main(void)
{
	float celsius;
	float fahrenheit;

	scanf("%f", &celsius);
	fahrenheit = (celsius * 9 / 5) + 32;

	printf("Fahrenheit=%g\n", fahrenheit);

	return 0;
}



