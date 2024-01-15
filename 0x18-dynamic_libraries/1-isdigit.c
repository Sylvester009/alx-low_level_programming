#include "main.h"

/**
 * _isdigit - checks for digit through 0 and 9
 * @c : digit to be checked
 * Return: 1 if c is digit, 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
