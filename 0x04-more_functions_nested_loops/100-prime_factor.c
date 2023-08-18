#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0 always
 */

int main(void)
{
	long a, higf;
	long pnumber = 612852475143;
	double square = sqrt(pnumber);

	for (a = 1; a <= square; a++)
	{
		if (pnumber % a == 0)
		{
			higf = pnumber / a;
		}
	}
	printf("%ld\n", higf);
	return (0);
}
