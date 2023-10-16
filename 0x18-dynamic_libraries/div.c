#include "ops.h"

/**
 * div - devide
 * @a: arg 1
 * @b: arg 2
 * Return: sum of.
 */
int div(int a, int b)
{
    if (b < 1)
    {
        return (0);
    }
    return (a / b);
}
