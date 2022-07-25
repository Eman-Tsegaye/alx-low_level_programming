#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints it's own name
 * @argc:number of the argument pointers
 * @argv:argument values
 * Return:0 for successful
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("%s\n", "Error");
	else
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
