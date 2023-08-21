#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * return: void
 */

void rev_string(char *s)
{
	int i = 0, length = 0;
	char a;

	while (s[i++])
		length++;

	for (i = length - 1; i >= length / 2; i--)
	{
		a = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = a;
	}
}
