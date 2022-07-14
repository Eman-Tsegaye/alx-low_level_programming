#include "main.h"
/**
 * reverse_array-reverses the content of an array
 * @a:integer
 * @n:integer
 * Return:always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int new[999];

	j = 0;

	for (i = n - 1; i >= 0 ; i--)
	{
		new[j] = *(a + i);
		j++;
	}
	for (i = 0; i < n; i++)
		a[i] = new[i];
}
