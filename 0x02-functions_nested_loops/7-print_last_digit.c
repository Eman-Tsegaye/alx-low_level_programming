#include "main.h"
/**
 *print_last_digit -> prints the last digit
 *@n: target
 *Return: The last digit
 */
int print_last_digit(int n)
{
	int i;

	i= n % 10;

	if (i < 0)
	{
		i = -i;
	}
	i = n % 10;
	_putchar(i + '0');
	return (i);
}
