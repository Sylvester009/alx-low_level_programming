#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print all letters except q and e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 16)
		{
			continue;
		}
		putchar(alp[i]);
	}
	return (0);
}
