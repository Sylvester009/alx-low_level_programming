#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, con_i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = con_i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[con_i] != '\0')
		con_i++;

	concat = malloc(sizeof(char) * (i + con_i + 1));

	if (concat == NULL)
		return (NULL);
	i = con_i = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		concat[i] = s2[con_i];
		i++, con_i++;
	}
	concat[i] = '\0';
	return (concat);
}
