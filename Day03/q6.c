/*
 * Name : Akshat Mittal
 * Sap ID : 590038005
 * Day : 03    Question : 6
 * Date : 12/08/2026
 *
 * PROBLEM STATEMENT: 
 *Q6: Write a program to swap two numbers using a third variable.

 */

#include <stdio.h>

int main(void)
{
	int first;
	int second;
	int temporary;

	scanf("%d %d", &first, &second);

	temporary = first;
	first = second;
	second = temporary;

	printf("After swap: %d %d\n", first, second);

	return 0;
}


