#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @src: source string
 * @dest: string thating the copy
 * @n: number of bytes to copy from src
 * Return: the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srclength = 0;

	while (src[i++])
		srclength++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = srclength; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
