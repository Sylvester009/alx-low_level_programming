#include <stdio.h>
#include "main.h"

/**
 * atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the integer converted
 */

int atoi(char *str)
{
	int i = 0;
	int y = 0;
	int n = 0;
	int length = 0;
	int x = 0;
	int digit = 0;

	while (str[length] != '\0')
		length++;

	while (i < length && x == 0)
	{
		if (str[i] == '-')
			++d;

		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - '0';

			if (y % 2)
				digit = -digit;

			n = n * 10 + digit;

			x = 1;

			if (str[i + 1] < '0' || str[i + 1] > '9')
				break;

			x = 0;
		}

		i++;

	}

	if (x == 0)
		return (0);

	return (n);
}

