#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * except 2 and 4
 * Return: the numbers
 */

void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
