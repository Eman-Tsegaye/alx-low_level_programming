#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: decimal number
 * @index: the index of the bit
 * Return: 1 on pass,-1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1 << index;

	if (index <= (sizeof(n) * 8 - 1))
	{
		*n &= ~num;
		return (1);
	}
	return (-1);
}
