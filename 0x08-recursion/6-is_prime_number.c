#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - check if an integer is prime
 * @n: int to be checked
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - tests whether n can be divisible
 * @n: int to be tested
 * @i: iterator
 * Return: int
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
