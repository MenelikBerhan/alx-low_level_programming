#include "main.h"

/**
 * _isdigit - checkes if character is a digit(0-9).
 * @c: the character to be checked in int type.
 *
 * Return: 1 if character i is a digit. 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
