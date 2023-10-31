#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array ohars
 * @size: size of array
 * @c: char
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
