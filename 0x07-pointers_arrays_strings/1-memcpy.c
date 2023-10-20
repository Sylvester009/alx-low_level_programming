#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: bytes
 * @src: where bytes is copied from
 * @dest: where bytes is copied to
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
