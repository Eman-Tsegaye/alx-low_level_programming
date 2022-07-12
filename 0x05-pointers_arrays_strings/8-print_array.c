#include "main.h"
#include<stdio.h>
/**
 * print_array-prints the second half of a string
 * print_number-prints an integer
 * @a:integer parameter
 * @n:integer parameter
 * Return:always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf("%c ", ',');
	}
	printf("%s", " ");
}
