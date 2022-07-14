#include "main.h"
/**
 * _strcmp-compares two strings
 * @s1:first para var
 * @s2:second para var
 * Return:integer
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

		if (*(s1) == *(s2))
			diff = 0;
		else if (*(s1) > *(s2))
			diff = s2[0] - s1[0];
		else
			diff = s1[0] - s2[0];
	return (diff);

}
