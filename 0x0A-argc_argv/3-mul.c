#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: Count arguments.
 * @argv: Index argument.
 * Return: (Success)
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3) // check if there are two arguments
	{
		printf("Error\n"); // print error message
		return (1);
	}
	a = atoi(argv[1]); // convert first argument to integer
	b = atoi(argv[2]); // convert second argument to integer
	result = a * b;
	printf("%d\n", result);
	return (0);
}
