#include "main.h"

/*
*This function prints alphabets by invoking _putchar
*/
void print_alphabet_x10(void)
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

