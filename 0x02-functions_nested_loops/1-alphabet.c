#include "main.h"
/**
 * main - main body
 * Description: loweercase alphabets
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return(0);
}
