#include "main.h"
/**
 * _isdigit - check for lowercase character
 * @c: input character for testing
 * Return: 1 if it's lowercase, 0 if not.
 */
int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
