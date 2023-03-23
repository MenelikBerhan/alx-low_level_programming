#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = 0;
		char c = '0';

		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			if (j == 10)
				c = '0';
			_putchar(c);
			c++;
			j++;
		}
		_putchar('\n');
	}
}
