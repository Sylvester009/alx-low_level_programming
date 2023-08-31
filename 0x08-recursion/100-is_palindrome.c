#include "main.h"

int check(char *s, int i, int length);
int strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 * Return: 1 if s is palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, strlen_recursion(s)));
}

/**
 * strlen_recursion - return the length of the string
 * @s: string
 * Return: length of the string
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}

/**
 * check - check character for palindrome recursively
 * @s: string to be checked
 * @i: interator
 * @length: length of the string
 * Return: 1 if palindrome, otherwise 0
 */

int check(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check(s, i + 1, length - 1));
}
