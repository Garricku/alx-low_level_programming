#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0 Success
 */
int main(void)
{
	int i = 0, j = 0, k = 0, l = 0, flag = 0;

	while (i <= 9)
	{
		if (((i * 10) + j) < ((k * 10) + l))
		{
			if (flag == 1)
			{
				putchar(',');
				putchar(' ');
				flag = 0;
			}
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(k + '0');
			putchar(l + '0');
			flag = 1;
		}
		if (j == 9 && k == 9 && l == 9)
		{
			i += 1, j = 0, k = 0, l = 0;
			continue;
		}
		if (k == 9 && l == 9)
		{
			j += 1, l = 0, k = 0;
			continue;
		}
		else if (l == 9)
		{
			k += 1, l = 0;
			continue;
		}
		l++;
	}
	putchar('\n');
	return (0);
}
