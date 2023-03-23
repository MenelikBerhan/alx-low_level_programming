#include "main.h"

/**
 * _isupper - checkes if character is Upper case.
 * @c: the character to be checked in int type.
 *
 * Return: 1 if character i UpperCase. 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
