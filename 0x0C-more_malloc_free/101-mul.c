#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * non_digit - checks if a string has a non-digit char
 * @str: string to be evaluated
 * Return: 0 if a non-digit is found,  otherwise 1
 */

int non_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * strlen - returns the length of a string
 * @str: string to evaluate
 * Return: the length of the string
 */

int strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * err - handles errors for main
 */

void err(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: count
 * @argv: arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, length, i, carry, digit1, digit2, *result, x = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !non_digit(s1) || !non_digit(s2))
		err();
	length1 = strlen(s1);
	length2 = strlen(s2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = s1[length1] - '0';
		carry = 0;
		for (length2 = strlen(s2) - 1; length2 >= 0; length2--)
		{
			digit2 = s2[length2] - '0';
			carry += result[length1 + length2 + 1] + (digit1 * digit2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 + length2 + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			x = 1;
		if (x)
			_putchar(result[i] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
