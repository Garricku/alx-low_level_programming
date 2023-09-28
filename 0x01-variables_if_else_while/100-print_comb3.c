#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0 Success.
 */
int main(void)
{
	int i = '0', j = '1', flag = 0;

	while (i <= '9')
	{
		if (i < j)
		{
			if (flag == 1)
			{
				putchar(',');
				putchar(' ');
				flag = 0;
			}
			putchar(i);
			putchar(j);
			flag = 1;
		}
		if (j == '9')
		{
			i++;
			j = '0';
			continue;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
