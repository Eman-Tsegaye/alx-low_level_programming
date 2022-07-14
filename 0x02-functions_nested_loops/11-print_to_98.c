#include "main.h"
#include <stdio.h>
/**
 * print_to_98-prints natural numbers upto 98
 * @n:integer parameter
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i < 98; i++)
		{
			printf("%d", i);
			if (i != n - 1)
				printf("%c ", ',');
		}
	else
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
			if ((i != n - 1) || i == 110)
				printf("%c ", ',');
		}
	printf("%d", 98);
	printf("%s", "\n");
}
