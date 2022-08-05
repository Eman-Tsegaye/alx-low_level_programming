#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name-points to the printing function
 * @name:string
 * @f:function pointer
 * Return:Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
