#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int c = 48;

		while (c <= 62)
		{
			if (c <= 57)
			{
				_putchar((char)c);
			}
			else
			{
				_putchar('1');
				_putchar((char)(c - 10));
			}
			c++;
		}
		_putchar('\n');
	}
}
