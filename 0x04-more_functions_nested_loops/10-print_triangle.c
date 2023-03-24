#include "main.h"

/**
 * print_triangle - prints a triangle using `#`, followed by a new line.
 * @size: an integer specifying the size of triangle.
 *
 * Description: if n <= 0 one newline will be printed.
 */

void print_triangle(int size)
{
	int space, hash, row;

	row = size;
	if (size <= 0)
		_putchar('\n');
	while (row > 0)
	{
		for (space = 1; space < row; space++)
		{
			_putchar(' ');
		}
		for (hash = row; hash <= size; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
		row--;
	}
}
