#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: String to be reversed.
 *
 * Return: (Success)
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = *(s - i);
		*(s - i) = *(s - len + i);
		*(s - len + i) = temp;
	}
}
