#include "main.h"
/**
 * _strlen-counts the length of a string
 * @s:character
 * Return:integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
return (len);
}
