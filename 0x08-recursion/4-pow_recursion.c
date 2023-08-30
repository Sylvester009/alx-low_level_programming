#include "main.h"

/**
 * _pow_recursion - returns x raised to the power of y
 * @x: integer to be raised to the power of y
 * @y: power of integer x
 * Return: value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
