#include "main.h"
#include <stdio.h>

/**
 * main - prints the largest prime factor of number
 *
 * Return: always 0
 */
int main(void)
{
	long i, lar_p = 0, n = 612852475143;

	for (i = 2; n > 1; i++)
	{
		while (n % i == 0)
		{
			n /= i;
			lar_p = i;
		}
	}
	printf("%ld\n", lar_p);

	return (0);
}
