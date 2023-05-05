#include "main.h"

/**
 * flip_bits - Finds the number of bits needed to be flipped to get
 * from number n to m or viceversa.
 * @n: first number.
 * @m: second number.
 *
 * Return: The number of bits bits needed to be flipped.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0, difference;

	difference = n ^ m;
	while (difference)
	{
		if (difference != (difference >> 1) << 1)
			flip++;
		difference >>= 1;
	}

	return (flip);

}
