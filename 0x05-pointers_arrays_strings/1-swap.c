#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
