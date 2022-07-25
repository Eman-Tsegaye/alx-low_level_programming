#include "main.h"
/**
 * _memset-fills the pointer sent with a constant byte
 * @s:string
 * @b:the byte
 * @n:integer
 * Return:string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *a = &b;

	for (i = 0; i < n; i++)
	{
	*(s + i) = *a;
	}
	return (s);
}
