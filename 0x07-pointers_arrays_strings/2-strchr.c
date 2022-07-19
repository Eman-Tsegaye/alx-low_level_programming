#include "main.h"
/**
 * _strchr-thhe function locates a character in a string
 * @s:string
 * @c:character
 * Return:index
 */
char *_strchr(char *s, char c)
{
	int len = 0;
	int i;

	while (*(s + len) != '\0')
	{
		len += 1;
	}
	for (i = 0; i < len; i++)
	{
		if (*(s + i) == c)
			break;
	}
	if (i == len - 1)
	{
		*s = '\0';
		return (s);
	}
	else
		return (s + i);
}
