#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: decimal number
 * @index: the index for the bit to set
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1 << index;

	if (index <= (sizeof(n) * 8 - 1))
	{
		*n |= num;
		return (1);
	}
	return (-1);
}
