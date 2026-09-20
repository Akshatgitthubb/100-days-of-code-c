/*
*Name : Akshat Mittal
*Sap ID : 590038005
*Day : 01
*Date : 20/09/26
*
*PROBLEM STATEMENT:
*Write a program to input two numbers and display their sum, difference, product, and quotient.
*/

#include <stdio.h>

int main(void)
{
	double firstNumber, secondNumber;

	printf("Enter two numbers: ");
	scanf("%lf %lf", &firstNumber, &secondNumber);

	printf("Sum = %.2lf\n", firstNumber + secondNumber);
	printf("Difference = %.2lf\n", firstNumber - secondNumber);
	printf("Product = %.2lf\n", firstNumber * secondNumber);

	if (secondNumber != 0)
	{
		printf("Quotient = %.2lf\n", firstNumber / secondNumber);
	}
	else
	{
		printf("Quotient is undefined because the second number is zero.\n");
	}

	return 0;
}
