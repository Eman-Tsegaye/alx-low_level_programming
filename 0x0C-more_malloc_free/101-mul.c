#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of two positive numbers
 * @argc: integer
 * @argv: pointer to pointer to character
 * Return: 0 for pass
 */

int main(int argc, char **argv)
{
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
