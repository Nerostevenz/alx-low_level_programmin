#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine greater and not equal to
 * Description: Print last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10
	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, v);
	}
	else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, v);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, v);
	}


	return (0);
}
