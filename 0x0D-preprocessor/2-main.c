#include <stdio.h>
#ifndef PROGRAM_NAME
#define PROGRAM_NAME __FILE__
#endif

/**
 * main - Entry point.
 * Return: 0 (Success).
 */

int main(void)
{
	printf("%s\n", PROGRAM_NAME);
	return (0);
}
