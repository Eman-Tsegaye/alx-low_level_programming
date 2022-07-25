#include "main.h"
/**
 * _puts-prints a string
 * @s:character
 * Return:always 0
 */
void _puts(char *s)
{
	int i;
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
		_putchar(*(s + i));
	_putchar('\n');
}



