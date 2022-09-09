#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 for little endian,0 for big endian
 */
int get_endianness(void)
{
	unsigned int subject = 1;
	char *flag = (char *)&subject;

	if (*flag)
		return (1);
	return (0);
}
