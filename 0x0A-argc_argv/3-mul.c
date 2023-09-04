#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the result of the multiplication of two numbers
 * @argc: count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
