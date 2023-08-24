#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @src: string to be appended to dest
 * @dest: string to be appended upon
 * @n: the bytes from src to be appended to dest
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, destlength = 0;

	while (dest[i++])
		destlength++;
	for (i = 0; src[i] && i < n; i++)
		dest[destlength] = src[i];
	return (dest);
}
