#include <stdlib.h>
#include <time.h>

/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - print last digit
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	r = n % 10;

	/* your code goes there */

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, r);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0", n, r);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, r);
	}
	printf("\n");
	return (0);
}
