#include "main.h"
#include <stdio.h>
/**
 * main-computes the sum of all natural numbers below 1024
 * Return:Always 0
 */
int main(void)
{
	int x[1024], i, sum = 0;

	for (i = 0; i < 1023; i++)
	{
		x[i] = i + 1;
		if (!(x[i] % 3) || !(x[i] % 5))
			sum = sum + x[i];
	}
	printf("%d", sum);
	printf("%s", "\n");
return (0);
}

