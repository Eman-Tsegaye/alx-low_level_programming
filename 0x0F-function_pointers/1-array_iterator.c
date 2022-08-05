#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator-calls a function pointer in a loop
 * @size:size type
 * @array:array
 * @action:pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
