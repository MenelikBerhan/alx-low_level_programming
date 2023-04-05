#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y.
 * @x: integer number to be raised to power of y.
 * @y: integer number to be the power of x.
 *
 * Return: x raised to power of y or -1 if y is less than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
