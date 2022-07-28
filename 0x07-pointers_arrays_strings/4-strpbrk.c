#include "main.h"
/**
 * _strpbrk-returns the number of bytes in the initial segment of a string
 *@s:string
 *@accept:list
 *Return:integer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return ('\0');
}
