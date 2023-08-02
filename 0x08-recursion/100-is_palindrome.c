#include "main.h"

/**
 * is_palindrome -  Returns 1 if a string is a palindrome and 0 if not.
 * @s: String to be checked for palindrome.
 * Return: (Success) 1 if palindrone else 0.
 */

int is_palindrome(char *s)
{
	int start, end;

	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
		return (is_palindrome(s, start + 1, end - 1));
}
