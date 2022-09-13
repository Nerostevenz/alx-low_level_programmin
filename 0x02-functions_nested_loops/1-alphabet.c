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
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
