#include "main.h"

/**
*This function prints alphabets
*/

void print_alphabet(void)
{
	int i, j;
	j = 97;
	for (i = 0 ; i < 26 ; i++)
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
