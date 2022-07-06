#include "main.h"
/*
 *main-prints calls a function that prints ten times
 *
 * Return : always 0
*/

int main(void)
{
	int i;
	for (i = 0 ; i < 10 ; i++)
	{
		print_alphabet_x10();
	}
	_putchar('\n');
	return (0);
}

