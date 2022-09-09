#include "main.h"

/**
 * get_bit - finds the index of the bit given
 * @n: input decimal number
 * @index: index of the bit
 * Return: the value at an index or -1 at fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num = n >> index;

	if (index <= (sizeof(n) * 8 - 1))
		return (num & 1);
	return (-1);
}
