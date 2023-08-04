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
	int a;
	int b;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
