#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to beginning of located substring
 * or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *A = haystack;
		char *B = needle;

		while (*A == *B && *B != '\0')
		{
			A++;
			B++;
		}

		if (*B == '\0')
			return (haystack);
	}
	return (NULL);
}
