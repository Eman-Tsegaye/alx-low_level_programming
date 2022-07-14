#include"main.h"
/**
 * string_toupper-converts a lower case character in a string to it's uppercase
 * Return:integer
 * @e:parameter
 */

char *string_toupper(char *e)
{
	int i;
	int len = 0;

	for (i = 0; *(e + i) != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (e[i] >= 97 && e[i] <= 122)
			e[i] = (e[i] - 32);
	}
return (e);
}
