#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: integer
 * @i: interate number
 * _sqr - calculate square root
 * Return: Square root of n
 */

int _sqr(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}

/**
 * _sqr - calculate square root
 * @n: integer
 * @i: interate number
 * Return: natural square root
 */

int _sqr(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
		return (-1);

	if (sqr == n)
		return (i);

	return (_sqr(n, i * 1));
}
