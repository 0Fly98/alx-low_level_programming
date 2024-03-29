#include <stdio.h>

int helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}

/**
 * helper - helper function to calculate sqrt
 * @n: integer to find sqrt of
 * @i: iterator
 * Return: natural square root or -1
 */
int helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper(n, i + 1));
}
