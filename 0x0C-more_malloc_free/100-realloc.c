#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated to malloc
 * @old_size: Size of the allocated space for ptr.
 * @new_size: size of the new memory block.
 *
 * Return: Pointer to the new allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		old_size = new_size;
	}

	for (i = 0; i < old_size; i++)
	{
		new_ptr[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (new_ptr);
}
