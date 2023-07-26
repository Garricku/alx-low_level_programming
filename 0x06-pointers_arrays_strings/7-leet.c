#include "main.h"

/**
 * leet - Encodes a string value to 1337.
 *
 * @str: String to be encoded to 1337.
 * Return: (Success)
 */

char *leet(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		int a = (*p == 'a' || *p == 'A');
		int e = (*p == 'e' || *p == 'E');
		int o = (*p == 'o' || *p == 'O');
		int t = (*p == 't' || *p == 'T');
		int l = (*p == 'l' || *p == 'L');

		if (a)
		{
			*p = '4';
		}
		else if (e)
		{
			*p = '3';
		}
		else if (o)
		{
			*p = '0';
		}
		else if (t)
		{
			*p = '7';
		}
		else if (l)
		{
			*p = '1';
		}
		p++;
	}
	return (str);
}
