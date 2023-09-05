#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * initializes it with a specific char
 * @size: array size
 * @c: char initialized to
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
