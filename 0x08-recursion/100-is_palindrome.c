#include "main.h"
#include <stdio.h>

int str_len(char *s);
int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to be checked
 *
 * Return: 1 if palindrome , 0 if not, 0
 */

int is_palindrome(char *s)
{
	int length = str_len(s);

	if (length <= 1)
		return (1);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * str_len - returns length of a string
 * @s: string to be checked
 *
 * Return: length of string
 */

int str_len(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + str_len(s + 1));
}

/**
 * check_palindrome - checks palindrome
 * @s: string to be checked
 * @start: index at the start
 * @end: index at the end
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}
