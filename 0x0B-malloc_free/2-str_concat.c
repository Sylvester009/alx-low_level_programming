#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *con_cat;
	int len1 = 0;
	int len2 = 0;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	con_cat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (con_cat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		con_cat[i] = s1[i];
	}

	for (j = 0; j < len2; j++, i++)
	{
		con_cat[i] = s2[j];
	}

	return (con_cat);
}
