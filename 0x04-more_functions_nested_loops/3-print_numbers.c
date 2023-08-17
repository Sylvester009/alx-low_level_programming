#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: 0 to 9
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
