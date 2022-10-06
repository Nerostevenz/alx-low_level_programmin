#include <stdlib.h>
#include "main.h"

/**
 * _strlen - function that returns length or string
 * @str: string to return length
 * Return: Int (length)
 */

int _strlen(char *str)
{
	int count;

	for (count = 0; str[count] != '\0';)
		count++;
	return (count);
}


/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	int i;
	unsigned int lens2 = _strlen(s2), count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= lens2)
	{
		n = lens2;
		newstr = malloc((_strlen(s1) + n + 1) * sizeof(char));
	}
	else
	{
		newstr = malloc((_strlen(s1) + lens2 + 1) * sizeof(char));
	}
	if (newstr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];
	for (; s2[count] != '\0' && count <= n; i++)
	{
		newstr[i] = s2[count];
		count++;
	}
	newstr[i + 1] = '\0';
	return (newstr);
}
