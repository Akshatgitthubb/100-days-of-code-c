/*
* Name : Akshat Mittal
* Sap ID : 590038005
* Day : 02    Question : 3
* Date : 11/08/2026

* PROBLEM STATEMENT:
*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 */

#include <stdio.h>

int main(void)
{
	int length, breadth;

	scanf("%d %d", &length, &breadth);

	printf("Area=%d, Perimeter=%d", length * breadth, 2 * (length + breadth));

	return 0;
}
