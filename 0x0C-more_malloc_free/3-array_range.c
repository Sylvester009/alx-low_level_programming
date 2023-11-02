#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min: minimum value range
 * @max: maximum value range
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
