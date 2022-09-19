#include "main.h"

/**
 * swap_int - swap integers
 * @a: integer a
 * @b: integer b
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
