#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @v: input value
 * Return: v value
 */

char *leet(char *v)
{
	int a, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; v[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (v[a] == s1[b])
			{
				v[a] = s2[b];
			}
		}
	}
	return (v);
}
