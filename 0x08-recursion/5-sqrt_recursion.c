#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of n.
 * @n: integer number.
 *
 * Return: natural square root of n if it has one or -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (_sqrt_helper(n, 2));

}

/**
 * _sqrt_helper - searches for the square root of a number from guess.
 * @n: the number for which a square root is to be found.
 * @guess: guessed integer root of n.
 *
 * Return: the natural sqare root of n if it has one or -1.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);

	return (_sqrt_helper(n, ++guess));
}
