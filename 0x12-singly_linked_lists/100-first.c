#include "lists.h"

/**
 * tort_hare - Prints the tortoise's comments before main/hare.
 * @:
 *
 * Return: Void.
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
