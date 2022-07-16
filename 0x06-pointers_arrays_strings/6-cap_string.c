#include"main.h"
/**
 * cap_string-converts a lower case character in a string to it's uppercase
 * Return:integer
 * @e:parameter
 */

char *cap_string(char *e)
{
	int a = 0, i;
	int len = 0;
	char omit[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', 9, 32, '\n'};

	while (e[len])
	{
		len++;
	}
	while (e[a])
	{
		for (i = 0; i < len; i++)
		{
			if ((e[a] >= 97 && e[a] <= 122) && (e[a - 1] == omit[i] || a == 0))
				e[a] = e[a] - 32;
		}
		a++;
	}
return (e);
}
