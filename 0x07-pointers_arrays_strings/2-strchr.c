#include "main.h"
/**
 * _strchr-thhe function locates a character in a string
 * @s:string
 * @c:character
 * Return:index
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
