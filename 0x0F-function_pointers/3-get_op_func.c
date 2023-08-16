#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Get & use the relavant op_fucntion.
 * @s: Points to a string (convert with atoi).
 * Return: int.
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {

		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	i = 0;
	while (i < '\0')
	{
		if (s == op[i])
		{
			return (ops[i]);
		}
	i++;
	}
	printf("Error\n");
	exit(99);
}
