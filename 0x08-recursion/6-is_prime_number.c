#include "main.h"

/**
 * is_prime_number - checks if an integer n is prime or not.
 * @n: integer number to be checked.
 *
 * Return: 1 if n is prime or 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - checks if an integer n is prime or not by dividing it
 *                  with integers starting from 2 up to n.
 * @n: integer number to be checked.
 * @divisor: the divisor of n.
 *
 * Return: 1 if n is prime or 0 otherwise.
 */

int is_prime_helper(int n, int divisor)
{
	if (divisor == n)
		return (1);
	if (n % divisor == 0)
		return (0);

	return (is_prime_helper(n, ++divisor));
}
