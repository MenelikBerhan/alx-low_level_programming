#include "main.h"

/**
 * print_line - prints "_" n times and with newline at the end.
 * @n: an integer specifying the no of times "_" is printed.
 *
 * Description: if n <= 0 one newline will be printed.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
