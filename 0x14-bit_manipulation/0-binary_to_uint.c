#include "main.h"
/**
 * binary_to_uint - converts a binary number to an integer
 * @b: string 
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0, len = 0, total = 0, n = 1;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		len++;
		i++;
	}
	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		if (b[len - 1] == '1')
			total += n;
		n *= 2;
		len--;
	}
	return (total);
}
