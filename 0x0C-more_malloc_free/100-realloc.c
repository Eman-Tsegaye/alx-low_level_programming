#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function reallocates a pointer
 * @ptr: a pointer reassign
 * @old_size: size of ptr
 * @new_size: new size to allocate
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *str;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (new_size > old_size)
		old_size = new_size;
	while (i < old_size)
	{
		str[i] = 'b';
		i++;
	}
	free(ptr);
	return (str);
}
