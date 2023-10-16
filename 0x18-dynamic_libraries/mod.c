#include "ops.h"

/**
 * mod - modulo
 * @a: arg 1
 * @b: arg 2
 * Return: sum of.
 */
int mod(int a, int b)
{
    if (b == 0) 
    {
        return (0);
    }
    return (a % b);
}
