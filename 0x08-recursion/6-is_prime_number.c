#include <stdio.h>

int is_prime_helper(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: integer to check if prime
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, n - 1));
}

/**
 * is_prime_helper - helper function to check if prime
 * @n: integer to check if prime
 * @i: iterator
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i - 1));
}
