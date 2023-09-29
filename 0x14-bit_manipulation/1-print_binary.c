#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int shift;
	int i, flag = 0;

	for (i = 63; i >= 0; i--)
	{
		shift = n >> i;

		if (shift & 1)
		{
			_putchar('1');
			flag++;
		}
		else if (flag)
			_putchar('0');
	}
	if (!flag)
		_putchar('0');
}
