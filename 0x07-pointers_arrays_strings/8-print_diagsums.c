#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: input
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sumone, sumtwo, i;

	sumone = 0;
	sumtwo = 0;

	for (i = 0; i < size; i++)
	{
		sumone = sumone + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sumtwo = sumtwo + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sumone, sumtwo);
}
