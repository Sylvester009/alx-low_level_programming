#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		n*= -1;
		x = n;
		_putchar('-');
	}
	x /= 10;
	if (x != 0)
		print_number(x);
	_putchar((unsigned int) n % 10 + '0');
}
