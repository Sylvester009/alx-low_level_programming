#include <stdio.h>

/**
 * main - print all possible combination of single-digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
		if (d != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
