#include "main.h"
#include <stdio.h>
/**
 * main-computes the sum of all natural numbers below 1024
 * Return:Always 0
 */
int main(void)
{
	int x[1024], y[1024], i, len = 0, sum = 0;

	for (i = 0; i < 1023; i++)
	{
		x[i] = i + 1;
		if (!(x[i] % 3) || !(x[i] % 5))
			y[i] = x[i];
	}
	for (i = 0; y[i]; i++)
	{
		len += 1;
		sum = sum + y[i];
	}
	printf("%d", sum);
	printf("%s", "\n");
return (0);
}

