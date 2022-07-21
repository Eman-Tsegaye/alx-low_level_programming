#include "main.h"
/**
 * _prime_tracer-calculates a square root of a number
 * @n:integer
 * @checker:integer
 * Return:integer
 */
int _prime_tracer(int n, int checker)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (checker == 1)
	{
		return (1);
	}
	else if (n % checker == 0)
	{
		return (0);
	}
	else
	{
		return (_prime_tracer(n, checker - 1));
	}
}
/**
 * is_prime_number-calculates a square root of a number
 * @n:integer
 * Return:integer
 */
int is_prime_number(int n)
{
	return (_prime_tracer(n, n - 1));
}
