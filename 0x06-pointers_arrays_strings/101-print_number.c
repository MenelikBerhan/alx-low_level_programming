#include "main.h"

/**
 * print_number - prints a number using only _putchar function.
 * @n: number to be printed.
 *
 */

void print_number(int n)
{
	unsigned int temp;

	if (temp < 0)
	{
		temp = -n;
		_putchar('-');
	}
	else
		temp = n;
	if (temp / 10)
		print_number(temp / 10);

	_putchar((temp % 10) + 48);

}
