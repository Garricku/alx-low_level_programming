#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the numbers from 1 to 100
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}

		else if (i % 3 == 0)
		{
			prinf("Fizz ");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d ", i);
		}
	}

	printf("\n");
	return (0);
}
