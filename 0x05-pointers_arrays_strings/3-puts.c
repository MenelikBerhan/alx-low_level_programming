#include "main.h"

/**
 * _puts - Prints a String followed by a newline.
 * @str : String to be printed.
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (1)
	{
		if (str[i] == 0)
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}

}
