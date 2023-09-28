#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0 Success
 */
int main(void)
{
	int i = '0', j = '0', k = '0', l = '0', flag = 0;

	while (i <= '9')
	{
		if ((i < j && i < k && i < l) || (i == k && j < l))
		{
			if (flag == 1)
			{
				putchar(',');
				putchar(' ');
				flag = 0;
			}
			putchar(i);
			putchar(j);
			putchar(' ');
			putchar(k);
			putchar(l);
			flag = 1;
		}
		if (j == '9' && k == '9' && l == '9')
		{
			i++;
			j = '0', k = '0', l = '0';
		}
		else if (k == '9' && l == '9')
		{
			j++;
			l = '0', k = '0';
		}
		else if (l == '9')
		{
			k++;
			l = '0';
		}
		l++;
	}
	putchar('\n');
	return (0);
}
