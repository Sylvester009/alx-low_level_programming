#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int b, c;

	for (b = 48; b <= 56; b++)
	{
		for (c = 49; c <= 57; c++)
		{
			if (c > b)
			{
				putchar(b);
				putchar(c);
				if (b != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
