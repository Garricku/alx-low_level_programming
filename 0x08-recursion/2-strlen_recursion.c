#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String to be checked for length.
 * Return: value of the length.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_reursion(s + 1) + 1);
}
