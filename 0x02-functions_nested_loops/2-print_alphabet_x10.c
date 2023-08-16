#include "main.h"

/**
 * print_alphabet_x10 - print alphabets x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alp;
	int i = 0;

	while (i <= 9)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
		i++;
	}
}
