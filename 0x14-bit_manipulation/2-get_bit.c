#include "main.h"

/**
 * get_bit - Finds the value of a bit, in a binary representation of number n,
 * at index 'index' counted right to left starting from 0.
 * @n: a number.
 * @index: the index of the bit to find.
 *
 * Return: The value of the bit at index, or -1 if an error occured.
*/
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 63)
		return (-1);

	if (n & (1 << index))
		return (1);
	else
		return (0);
}
