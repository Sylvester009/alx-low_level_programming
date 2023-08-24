#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: string to be appended
 * @dest: string that is appended into
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dlength = 0, i;

	while (dest[dlength])
	{
		dlength++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlength] = src[i];
		dlength++;
	}
	dest[dlength] = '\0';
	return (dest);
}
