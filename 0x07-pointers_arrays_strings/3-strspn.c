#include "main.h"
/**
 * _strspn-returns the number of bytes in the initial segment of a string
 *@s:string
 *@accept:list
 *Return:integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, count = 0;

	while (s[i])
	{
		if (s[i] == ',' || s[i] == ' ')
			break;
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
