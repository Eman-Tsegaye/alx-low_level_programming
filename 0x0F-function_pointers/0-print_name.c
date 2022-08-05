#include "function_pointers.h"

/**
 * print_name-points to the printing function
 * @name:string
 * @f:function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
