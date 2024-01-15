#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: a pointer to c in s or NULL
 * if c is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
