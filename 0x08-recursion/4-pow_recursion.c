#include "main.h"
#include <unistd.h>

/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 * @x: integer to be raised
 * @y: interger that is used to raise x
 *
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
