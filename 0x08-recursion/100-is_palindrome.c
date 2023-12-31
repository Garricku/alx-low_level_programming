#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string to check.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
        if (*s == '\0')
        {
                return (0);
        }
        return (_strlen_recursion(s + 1) + 1);
}

int main()
{
	int len = _strlen_recursion(s);
	*s = &s;

	if (len <= 1)
	{
		return 1;
	}
	if (s[0] != s[len - 1])
	{
		return 0;
	}
	s[len - 1] = '\0';

	return (is_palindrome(s + 1));
}
