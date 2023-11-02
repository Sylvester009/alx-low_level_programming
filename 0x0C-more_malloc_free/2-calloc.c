#include <stdlib.h>
#include "main.h"

/**
 * mem_set - Fills memory with a constant value.
 * @p: Memory to be filled.
 * @value: Value to be set in each byte.
 * @num: Number of times to copy the value.
 *
 * Return: Pointer to the memory area.
 */

char *mem_set(char *p, char value, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < num; i++)
	{
		p[i] = value;
	}

	return (p);
}

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Elements in the array.
 * @size: Size of each element.
 *
 * Return: Pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	mem_set(ptr, 0, nmemb * size);

	return (ptr);
}
