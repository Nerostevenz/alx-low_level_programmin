#include <stdio.h>
#include <stdlib.h>
/**
 * main -main block
 * Description: print lower and upper case
 * Return: 0
 */
 main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
		putchar(ch);
		for (ch = 'A'; ch <= 'Z'; ch++)
			putchar(ch);		
			putchar('\n');
			getch();
}
