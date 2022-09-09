#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number bit flips
 * @m: number to set
 * Return: number of turned bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int turn_count = 0;
	unsigned long int xor;

	xor = (n ^ m);

	while (xor)
	{
		turn_count += xor & 1;
		xor >>= 1;
	}
	return (turn_count);
}
