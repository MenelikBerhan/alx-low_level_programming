#include "main.h"

/**
 * set_bit - Sets the value of a bit, in a binary representation of number n,
 * at index 'index', counted right to left starting from 0, to 1.
 * @n: a pointer to a number n.
 * @index: the index of the bit to set to 1.
 *
 * Return: 1 (Success) or -1 (Failure).
*/
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	if (!(*n & (1 << index)))
		*n += (1 << index);
	return (1);
}
