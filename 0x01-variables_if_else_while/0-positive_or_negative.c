#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: prints if a number is positive or negative
 * Return: 0
 */
int main(void)
{
	int e;

	srand(time(0));
	e = rand() - RAND_MAX / 2;
	if (e > 0)
		printf("%d is positive\n", e);
	if (e == 0)
		printf("%d is zero\n", e);
	if (e < 0)
		printf("%d is negative\n", e);
	return (0);
}
