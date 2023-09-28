#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0 on Success always.
 */
int main(void)
{
	int i = '0', j = '0', k = '0', flag = 0;

	while (i <= '9')
	{
		if (i < j && i < k && j < k)
		{
			if (flag == 1)
			{
				putchar(',');
				putchar(' ');
				flag = 0;
			}
			putchar(i);
			putchar(j);
			putchar(k);
			flag = 1;
		}
		if (j == '9' && k == '9')
		{
			i++;
			j = '0';
			k = '0';
		}
		else if (j == '9')
		{
			i++;
			j = '0';
		}
		else if (k == '9')
		{
			j++;
			k = '0';
		}
		k++;
	}
	putchar('\n');
	return (0);
}
