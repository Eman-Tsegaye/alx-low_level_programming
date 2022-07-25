#include "main.h"
/**
 * _strcat-appends the src string to dest
 * @dest:destination string
 * @src:source string
 * Return:string
 */
char *_strcat(char *dest, char *src)
{

	int len1 = 0;
	int len2 = 0;
	int i;

	while (*(dest + len1) != '\0')
	{
		len1++;
	}
	len2 = len1;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + (len1 + i)) = *(src + i);
		len2 += 1;
	}
	dest[len2] = '\0';
	return (dest);

}
