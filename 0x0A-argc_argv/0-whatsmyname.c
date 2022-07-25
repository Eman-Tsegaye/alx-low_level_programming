#include "main.h"
#include <stdio.h>
/**
 * main-prints it's own name
 * @argc:number of the argument pointers
 * @argv:argument values
 * Return:0 for successful
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
