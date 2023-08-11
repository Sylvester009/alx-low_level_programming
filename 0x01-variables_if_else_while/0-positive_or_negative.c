#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - number is positive or negative
 * if it is n is greater than 0 make positive
 * if n is 0 make zero
 * if n is less than 0 make negative
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	};
	printf("\n");
	return (0);
}
