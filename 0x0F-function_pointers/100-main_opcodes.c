#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, byte;
	char *ptr_arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr_arr = (char *)main;

	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", ptr_arr[i]);
			break;
		}

		printf("%02hhx ", ptr_arr[i]);
	}

	return (0);
}
