#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer to be changed into a char.
 * @to: The value the pointer must be chaged to.
 * Return: Pointer to char.
 */

void set_string(char **s, char *to)
{
	char *v = to;
	*s = v;
}
