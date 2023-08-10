#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point.
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int mul;
	int num1;
	int num2;
	char *err;
	char *str;
	int i;

	err = "Error\n";

	if (argc != 3)
	{
		for (i = 0; err[i] != '\0'; i++)
		{
			_putchar(err[i]);
		}
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
		for(i = 0; err[i] != '\0'; i++)
		{
			_putchar(err[i]);
		}
		exit(98);
	}
	mul = num1 * num2;
	str = itoa(mul);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
