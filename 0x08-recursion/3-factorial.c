#include "main.h"

/**
 * factorial - calculates the factorial of integer n.
 * @n: integer number.
 *
 * Return: the factorial of integer n or -1 if n is less than 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
