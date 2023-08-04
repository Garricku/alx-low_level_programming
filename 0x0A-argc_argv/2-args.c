#include <stdio.h>

/**
 * main - Entry point.
 * @argc: count argument
 * @argv: argument index
 * Return: (Success)
 */

int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
