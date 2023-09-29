#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: number
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= 64)
		return (-1);

	value = (n >> index) & 1;
	return (value);
}

