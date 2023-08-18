#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b.
 * @a: num1
 * @b: num2
 * Return: calc
 */

int op_add(int a, int b)
{
	int calc;

	calc = (a) + (b);
	return (calc);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: num1
 * @b: num2
 * Return: calc
 */

int op_sub(int a, int b)
{
	int calc;

	calc = (a) - (b);
	return (calc);
}

/**
 * op_mul - returns the product of a and b.
 * @a: num1
 * @b: num2
 * Return: calc
 */

int op_mul(int a, int b)
{
	int calc;

	calc = (a) * (b);
	return (calc);
}

/**
 * op_div - returns the result of the division of a by b.
 * @a: num1
 * @b: num2
 * Return: calc
 */

int op_div(int a, int b)
{
	int calc;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = (a) / (b);
	return (calc);
}

/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: num1
 * @b: num2
 * Return: calc
 */

int op_mod(int a, int b)
{
	int calc;

	calc = (a) % (b);
	return (calc);
}
