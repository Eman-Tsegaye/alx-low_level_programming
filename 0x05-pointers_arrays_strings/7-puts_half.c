#include "main.h"
/**
 * puts_half-prints the second half of a string
 * @str:character
 * Return:always 0
 */
void puts_half(char *str)
{
	int i, j;
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
		j = len / 2 + 1;
	else
		j = len / 2;
	for (i = j ; i < len ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
