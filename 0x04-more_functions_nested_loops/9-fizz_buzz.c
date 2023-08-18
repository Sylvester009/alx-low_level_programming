#include "main.h"
#include <stdio.h>

/**
 * main - print numbers from 1 to 100, followed by a new line
 * but for multiples of 3 and 5, print Fizz and Buzz
 * for number with both multiples of 3 and 5, print FizzBuzz
 * Return: the result
 */

int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("Fizzbuzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
