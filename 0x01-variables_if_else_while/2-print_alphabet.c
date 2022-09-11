#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print alphabet in lower case
 * Return: 0 as SUCCESS
 */
int main(void)
{
	char c = "a";

	while (c <= "z")
	{
		putchar(c);
		c++;
	}
	putchar("\n");

	return (0);
}
