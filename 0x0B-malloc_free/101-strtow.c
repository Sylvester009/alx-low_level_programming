#include "main.h"
#include <stdlib.h>

/**
 * c_word - function to count the number of words in a string
 * @s: string to evaluate
 * Return: numbers of word
 */

int c_word(char *s)
{
	int f, c, w;

	f = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}

	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	char **mat, *tmp;
	int i, k = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;
	words = c_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mat[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	mat[k] = NULL;
	return (mat);
}
