#include <stdio.h>
/**
 * main - main block
 * Description: Print alphabet in lower case
 * Return: 0
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
