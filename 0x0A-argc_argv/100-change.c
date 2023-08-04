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
	int cents = atoi(argv[1]);
	int coins = 0;
	int quarters;
	int dimes;
	int nickels;
	int pennies;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	quarters = cents / 25;
	coins += quarters;
	cents %= 25;
	dimes = cents / 10;
	coins += dimes;
	cents %= 10;
	nickels = cents / 5;
	coins += nickels;
	cents %= 5;
	pennies = cents / 1;
	coins += pennies;

	printf("%d\n", coins);
	return (0);
}
