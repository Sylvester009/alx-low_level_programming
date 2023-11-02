#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	string = malloc(sizeof(char) * (len1 + n + 1));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		string[i] = s1[i];

	for (i = 0; i < n; i++)
		string[len1 + i] = s2[i];

	string[len1 + n] = '\0'; /* Null-terminate the result */

	return (string);
}
