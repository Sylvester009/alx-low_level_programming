#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* @n: number to be printed in binary
* Return: void
*/

void print_binary(unsigned long int n)
{
int i, num = 0;
unsigned long int nextz;

for (i = 63; i >= 0; i--)
{
nextz = n >> i;

if (nextz & 1)
{
_putchar('1');
num++;
}
else if (num)
_putchar('0');
}
if (!num)
_putchar('0');
}
