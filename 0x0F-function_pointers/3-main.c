#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Arguments to be used for calc.
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int arg1;
	int arg2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	result = get_op_func(argv[2])(arg1, arg2);
	printf("%d\n", result);

	return (0);
}
