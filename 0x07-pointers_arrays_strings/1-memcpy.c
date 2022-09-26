#include "main.h"

/**
 * _memcpy -copy byte to addres
 * @dest: content to copy
 * @src: source data
 * @n: bytes to fill
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (1 < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
