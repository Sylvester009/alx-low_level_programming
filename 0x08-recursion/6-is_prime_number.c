#include "main.h"
#include <stdio.h>

int prime_number(int n, int x);

/**
 * is_prime_number - function that returns 1,
 * if integer is a prime number
 *
 * @n: integer that is checked
 *
 * Return: returns 1 or 0
 */

int is_prime_number(int n)
{
	return (prime_number(n, 1));
}

/**
 * prime_number - checks for a prime number
 * @n: integer that is checked
 * @x: what is used to test
 *
 * Return: returns 1 or 0
 */

int prime_number(int n, int x)
{
	if (n < 2)
		return (0);

	if (x > 1 && n % x == 0)
		return (0);

	if ((n / x) < x)
		return (1);

	return (prime_number(n, x + 1));
}
