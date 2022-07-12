#include "main.h"
/**
 * rev_string-prints a string
 * @s:character
 * Return:always 0
 */
void rev_string(char *s)
{
	int i, j;
	int len = 0;
	static char *new;

	j = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0 ; i--)
	{
		new[j] = *(s + i);
		j++;
	}
	new[len] = '\0';
	for (i = 0; i < len; i++)
		s[i] = new[i];
}
