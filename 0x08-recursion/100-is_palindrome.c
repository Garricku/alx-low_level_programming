#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string to check.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	return (pal_helper(s, len, 0));
}

/**
 * pal_helper - checks if a string is a palindrome.
 * @s: the string to check.
 * @len: the length of the string.
 * @i: the current index to check.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int pal_helper(char *s, int len, int i)
{
	if (i >= len / 2)
	{
		return (1);
	}
	if (s[i] != s[len - i - 1])
	{
		return (0);
	}
	return (pal_helper(s, len, i + 1));
}
