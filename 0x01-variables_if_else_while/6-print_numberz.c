#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print base 10 without using char
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	pputchar('\n');

	return (0);
}
