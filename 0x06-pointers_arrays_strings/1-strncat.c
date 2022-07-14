#include "main.h"
/**
 * _strncat-appends the src string to dest
 * @dest:destination string
 * @src:source string
 * @n:integer
 * Return:string
 */
char *_strncat(char *dest, char *src, int n)
{

	int len1 = 0;
	int len2 = 0;
	int i;

	while (*(dest + len1) != '\0')
	{
		len1++;
	}
	len2 = len1;

	for (i = 0; i < n; i++)
	{
		*(dest + (len1 + i)) = *(src + i);
		len2 += 1;
	}
	dest[len2] = '\0';
	return (dest);

}

