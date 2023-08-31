#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - returns if integer is a prime number or not
 * @n: integer to be checked
 * Return: 1 if integer is prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - calculate if a number is a prime number
 * @n: integer to be checked
 * @i: interate number
 * Return: 1 if n is prime number otherwise 0
 */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);

	return (_prime(n, i - 1));
}
