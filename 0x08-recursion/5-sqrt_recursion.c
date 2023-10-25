#include "main.h"
#include <stdio.h>

int find_sqrt(int n, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number whose sqrt root is to be returned
 *
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - function to find the square root
 * @n: number whose sqrt root is to be returned
 * @y: iterate number
 *
 * Return: sqrt of n
 */

int find_sqrt(int n, int y)
{
	int square = y * y;

	if (square == n)
		return (y);

	if (square > n)
		return (-1);

	return (find_sqrt(n, y + 1));
}
