#include "main.h"
/**
 * _sqrt_tracer-calculates a square root of a number
 * @n:integer
 * @flag:integer
 * Return:integer
 */
int _sqrt_tracer(int n, int flag)
{
	if (flag * flag > n || n < 0)
	{
		return (-1);
	}
	else if (flag * flag == n)
	{
		return (flag);
	}
	else
	{
		return (_sqrt_tracer(n, flag += 1));
	}
}
/**
 * _sqrt_recursion-calculates a square root of a number
 * @n:integer
 * Return:integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_tracer(n, 0));
}
