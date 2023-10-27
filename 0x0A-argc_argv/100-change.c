#include <stdio.h>
#include "main.h"

/*
 * main - prints coins to make change for money.
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 success, 1 if error
 */

int main(int argc, char *argv[])
{
	int result, i, cent;

	char coin_value[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	result = 0;

	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cent >= 0; i++)
	{
		while (cent >= coin_value[i])
		{
			result++;

			cent -= coin_value[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
