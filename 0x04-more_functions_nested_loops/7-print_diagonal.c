#include "main.h"
/**
 * print_line - draws a diagonal line in the terminal
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d < c; d++)
			{
			_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
