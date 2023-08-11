#include <stdio.h>

/**
 * main - print lowercase letter in reverse
 *
 * Return: 0 (success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i >= 0; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
