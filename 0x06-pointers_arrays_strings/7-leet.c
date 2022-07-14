#include"main.h"
/**
 * leet-converts a lower case character in a string to it's uppercase
 * @x:parameter
 * Return:integer
 */

char *leet(char *x)
{
	int i;
	int len = 0;

	while (x[len])
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (x[i] == 97 || x[i] == 65)
		{
			x[i] = 52;
		}
		else if (x[i] == 101 || x[i] == 69)
		{
			x[i] = 51;
		}
		else if (x[i] == 111 || x[i] == 79)
		{
			x[i] = 48;
		}
		else if (x[i] == 116 || x[i] == 84)
		{
			x[i] = 48;
		}
		else if (x[i] == 111 || x[i] == 79)
		{
			x[i] = 48;
		}
		else if (x[i] == 108 || x[i] == 76)
		{
			x[i] = 49;
		}
		else
			continue;
	}
return (x);
}
