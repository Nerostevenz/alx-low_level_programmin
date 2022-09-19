#include "main.h"

/**
 * print_array - prints all elements
 * @a: integer a
 * @n: integer n
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
