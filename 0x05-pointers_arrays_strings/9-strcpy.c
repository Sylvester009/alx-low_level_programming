#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: where the string is copied into
 * @src: the string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
