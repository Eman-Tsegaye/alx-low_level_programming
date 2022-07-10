#include "main.h"
/**
 * _isdigit- checks if an input is a digit
 * @c:integer
 * Return:1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
