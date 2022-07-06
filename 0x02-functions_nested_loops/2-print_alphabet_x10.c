#include "main.h"
/**
 * print_alphabet_x10 - This function prints lC alphabets ten times
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int e;
	int h;

	for (h = 0; h < 10; h++)
	{
		for (e = 'a'; e <= 'z'; e++)
		{
			_putchar(e);
		}
		_putchar('\n');
	}
}
