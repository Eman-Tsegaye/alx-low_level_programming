#include "main.h"
/**
 * puts_half-prints the second half of a string
 * @str:character
 * Return:always 0
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
		len -= 1;
	for (i = len / 2; i < len ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
