#include "main.h"
#include <stdio.h>
/**
 * main-computes the sum of even numbers in the fibunacci series below 4000000
 * Return:Always 0
 */
int main(void)
{
	unsigned int x[35], y[35], i, sum = 0;

	for (i = 0; i < 35; i++)
		y[i] = i + 1;
	x[0] = 1;
	x[1] = 2;
	for (i = 0; i < 35; i++)
	{
		x[i + 2] = x[i] + x[i + 1];
		if ((x[i + 2] % 2) && (x[i + 2] <= 4000000))
			sum = sum + x[i];
	}
	printf("%d", sum);
	printf("%s", "\n");
	i = 0;
	while (i < 35)
	{
		printf("%d ,", x[i]);
		i++;
	}
return (0);
}
