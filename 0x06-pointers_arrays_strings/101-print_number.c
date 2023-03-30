#include "main.h"

/**
 * print_number - prints a number using only _putchar function.
 * @n: number to be printed.
 *
 */

void print_number(int n)
{
	int temp = n;

	if (temp < 0)
	{
		temp *= -1;
		_putchar('-');
	}

	if (temp / 10)
		print_number(temp / 10);

	_putchar((temp % 10) + 48);

}
