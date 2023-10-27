#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int count;

	(void) argv; /* ignores argv[] */

	count = argc - 1;

	printf("%d\n", count);

	return (0);
}
