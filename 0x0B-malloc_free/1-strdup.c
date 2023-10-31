#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer to new space or NULL
 */

char *_strdup(char *str)
{
	char *str_copy;
	int i = 0;

	int j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	str_copy = malloc(sizeof(char) * (i + 1));

	if (str_copy == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
		str_copy[j] = str[j];

	str_copy[j] = '\0';

	return (str_copy);
}
