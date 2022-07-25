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
	int i;

        if (argc > 0)
                for (i = 0; i < argc; i++)
                        printf("%s\n", *(argv + i));
        return (0);
}
