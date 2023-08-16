#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 always
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1Half1, fib1Half2, fib2Half1, fib2Half2;
	unsigned long half1, half2;

	for (count = 0; count  <= 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib1Half1 = fib1 / 10000000000;
	fib2Half1 = fib2 / 10000000000;
	fib1Half2 = fib1 % 10000000000;
	fib2Half2 = fib2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		half1 = fib1Half1 + fib2Half1;
		half2 = fib1Half2 + fib2Half2;
		if (fib1Half2 + fib2Half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
		fib1Half1 = fib2Half1;
		fib1Half2 = fib2Half2;
		fib2Half1 = half1;
		fib2Half2 = half2;
	}
	printf("\n");
	return (0);
}
