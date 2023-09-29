#include "main.h"
#include <stdio.h>

/**
 * set_bit -  sets the value of a bit at an index to 1
 * @n: pointer to number
 * @index: index of the bit to set starting from 0
 *
 * Return: 1 for success, -1 if it is an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n | (1UL << index);
	return (1);
}
