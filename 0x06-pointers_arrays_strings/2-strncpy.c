#include "main.h"
/**
 * _strncpy-appends the src string to dest
 * @dest:destination string
 * @src:source string
 * @n:integer
 * Return:string
 */
char *_strncpy(char *dest, char *src, int n)
{

	int len1 = 0;
	int i;

	while (*(dest + len1) != '\0')
	{
		len1 += 1;
	}

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i += 1;
	}
	return (dest);

}
