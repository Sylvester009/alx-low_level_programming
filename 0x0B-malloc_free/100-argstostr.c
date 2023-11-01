#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments to program
 * @ac: integer input
 * @av: double pointer array
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, n;
	int position = 0;

	int length = 0;

	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			length++;
	}

	length += ac;

	string = malloc(sizeof(char) * length + 1);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			string[position] = av[i][n];
			position++;
		}

		if (string[position] == '\0')
		{
			string[position++] = '\n';
		}
	}

	return (string);
}
