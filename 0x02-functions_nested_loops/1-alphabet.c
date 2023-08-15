#include "main.h"

/**
 * main - print lowercase and a new line
 */

int main(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alp[i]);
	}
	putchar('\n');
}
