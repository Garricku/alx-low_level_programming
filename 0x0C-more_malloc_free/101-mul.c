#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point.
 * @argc: Argument count.
 * @argv: Argument 1 and 2.
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int mul;
	int num1;
	int num2;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		exit(98);
	}

	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
