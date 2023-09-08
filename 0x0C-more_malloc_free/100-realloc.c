#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: size of the allocated  space for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr_1 = malloc(new_size);
	if (!ptr_1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr_1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr_1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr_1);
}
