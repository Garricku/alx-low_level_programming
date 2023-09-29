#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * struct forma - A structure for the format.
 * @c: A charater.
 * @i: And interger.
 * @f: A float.
 * @s: A string.
 */
typedef struct forma
{
	char c;
	int i;
	float f;
	char s;
} format;

/*FUNCTION PROTOTYPES*/

	int sum_them_all(const unsigned int n, ...);
	void print_numbers(const char *separator, const unsigned int n, ...);
	void print_strings(const char *separator, const unsigned int n, ...);
	void print_all(const char * const format, ...);
	int _putchar(char c);

#endif
