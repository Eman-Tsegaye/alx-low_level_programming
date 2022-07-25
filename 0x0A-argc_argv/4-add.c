#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main-prints it's own name
 * @argc:number of the argument pointers
 * @argv:argument values
 * Return:0 for successful
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j])
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
		sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	return (0);
}
