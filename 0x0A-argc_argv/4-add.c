#include <stdio.h>
#include "main.h"

/**
 * main - adds two positive number together
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int sums, i, j, num;
	char *args;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sums = 0;

		for (i = 1; i < argc; i++)
		{
			args = argv[i];

			for (j = 0; args[j] != '\0'; j++)
			{
				if (args[j] < '0' || args[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			num = atoi(args);

			if (num < 0)
			{
				printf("Error\n");
				return (1);
			}
			sums += num;
		}
		printf("%d\n", sums);
	}
	return (0);
}
