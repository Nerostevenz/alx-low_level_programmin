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

	for (i = 0; i < n; i++)
		*(dest + 1) = *(src + 1);

	return (dest);
}
