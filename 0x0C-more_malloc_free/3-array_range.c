#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum values stored
 * @max: maximum values stored
 * Return: pointer to the newly created  array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	ptr = malloc(sizeof(int) * s);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
