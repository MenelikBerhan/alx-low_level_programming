#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: number to be printed in binary.
 *
 * Example: print_binary(0); -> 0
 *			print_binary(1024); -> 10000000000
*/
void print_binary(unsigned long int n)
{
	if (n >= 2)
		print_binary(n >> 1);

	if (n == ((n >> 1) * 2))
		_putchar('0');
	else
		_putchar('1');

}
