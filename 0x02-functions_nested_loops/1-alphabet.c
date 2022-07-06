#include "main.h"
/**
 * print_alphabet - This function prints lower case
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
