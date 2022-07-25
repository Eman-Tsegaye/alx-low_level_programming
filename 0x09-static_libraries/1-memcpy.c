#include "main.h"
/**
 * _memcpy-fills the pointer sent with a constant byte
 * @dest:string
 * @src:the byte
 * @n:integer
 * Return:string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	*(dest + i) = *(src + i);
	}
	return (dest);
}
