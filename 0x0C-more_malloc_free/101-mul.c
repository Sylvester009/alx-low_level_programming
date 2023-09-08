#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * non_digit - checks if a string has a non-digit char
 * @str: string to be evaluated
 * Return: 0 if a non-digit is found, otherwise 1
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

int _strlen(char *str)
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
	char *str1, *str2;
	int length1, length2, length, i, carry, num1, num2, *mul, x = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !non_digit(str1) || !non_digit(str2))
		err();
	length1 = _strlen(str1);
	length2 = _strlen(str2);
	length = length1 + length2 + 1;
	mul = malloc(sizeof(int) * length);
	if (!mul)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		mul[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = str1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(str2) - 1; length2 >= 0; length2--)
		{
			num2 = str2[length2] - '0';
			carry += mul[length1 + length2 + 1] + (num1 * num2);
			mul[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			mul[length1 + length2 + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (mul[i])
			x = 1;
		if (x)
			_putchar(mul[i] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(mul);
	return (0);
}
