#include "main.h"
/**
 * _isupper - check for lowercase character
 * @c: input character for testing
 * Return: 1 if it's lowercase, 0 if not.
 */
int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
