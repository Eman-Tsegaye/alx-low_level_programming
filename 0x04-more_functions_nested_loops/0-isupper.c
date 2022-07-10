#include "main.h"
/**
 * _isupper - verifies upper or lower case
 * @c: integer
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
