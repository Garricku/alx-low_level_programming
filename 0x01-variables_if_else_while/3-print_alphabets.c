#include <stdio.h>

/**
 * main - Enty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }

    for (c = 'A'; c <= 'Z'; c++)
    {
        putchar(c);
    }

    putchar('\n');

    return (0);
}
