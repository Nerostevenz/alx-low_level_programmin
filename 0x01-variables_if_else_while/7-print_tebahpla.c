#include <stdio.h>
#include <stdlib>
/**
 * main - main block
 * Description: Smiley
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
