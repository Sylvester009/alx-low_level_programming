#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @str: pointer to string parameter
 * Return: *str
 */

char *rot13(char *str)
{
	int i;
	int x;

	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alprot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x < 52; x++)
		{
			if (str[i] == alp[x])
			{
				str[i] = alprot[x];
				break;
			}
		}
	}
	return (str);
}
