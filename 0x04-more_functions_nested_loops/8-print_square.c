#include "main.h"

/**
 * print_square - prints a square of given size
 * using "#" followed by a new line
 * @size: the size of square to be printed.
 *
 * Description: if n <= 0 one newline will be printed.
 */

void print_square(int size)
{
	int l, w;

	if (size <= 0)
		_putchar('\n');
	for (l = 0; l < size; l++)
	{
		for (w = 0; w < size; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
