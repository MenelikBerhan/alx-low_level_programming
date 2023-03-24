#include "main.h"

/**
 * print_triangle - prints a triangle using `#`, followed by a new line.
 * @size: an integer specifying the size of triangle.
 *
 * Description: if n <= 0 one newline will be printed.
 */

void print_triangle(int size)
{
	int i, j, temp;

	temp = size;
	if (size <= 0)
		_putchar('\n');
	while (temp > 0)
	{
		for (i = 1; i < temp - 1; i++)
		{
			_putchar(' ');
		}
		for (j = temp; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		temp--;
	}
}
