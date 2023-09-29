#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x_result = n ^ m;
	unsigned long int current;
	int i, count = 0;

	for (i = 0; i < 64; i++)
	{
		current = x_result >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
