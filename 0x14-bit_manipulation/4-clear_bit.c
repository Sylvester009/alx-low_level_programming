#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to number
 * @index: index of the bit to set
 *
 * Return: 1 for success, -1 if an error occur
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}
