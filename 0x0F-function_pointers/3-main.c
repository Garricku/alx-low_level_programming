#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int arg1[1];
	int arg2[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg[1] = atoi(argv[1]);
	arg[2] = atoi(argv[3]);

	get_op_func(arg[1], arg[2]);

	return (0);
}
