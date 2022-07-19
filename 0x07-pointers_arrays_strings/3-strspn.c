#include "main.h"
/**
 * _strspn-returns the number of bytes in the initial segment of a string
 *@s:string
 *@accept:list
 *Return:integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, sum, len;

	i = 0;
	sum = 0;
	len = 0;

	/*while (*(accept + len) != '\0')*/
	while ((s[len] >= 65 && s[len] <= 90) || (s[len] >= 97 && s[len] <= 122))
		len += 1;

	while ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
	{
		for (j = 0; j <= len; j++)
		{
			if (accept[i] == s[j])
				sum += 1;
		}
		i += 1;
	}
	return (sum);
}
