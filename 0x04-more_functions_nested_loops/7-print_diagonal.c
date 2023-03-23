#include "main.h"

/**
 * print_diagonal - draws a diagonal followed by newline n times.
 * @n: an integer specifying the no of times "\" is printed.
 *
 * Description: if n <= 0 one newline will be printed.
 */

void print_diagonal(int n)
{
	int temp = n;

	while (n > 0)
	{
		int space = temp - n;

		while (space > 0)
		{
			_putchar(' ');
			space--;
		}
		_putchar('\\');
		_putchar('\n');

		n--;
	}
	_putchar('\n');
}
