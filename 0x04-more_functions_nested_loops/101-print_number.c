#include "main.h"

/**
 * print_number - prints an integer
 * @k: input parameter
 * Return: always 0
 */
void print_number(int k)
{
	unsigned int i;

	if (k >= 0)
		i = k;
	else
	{
		_putchar('-');
		i = -k;
	}
	if (i / 10)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
