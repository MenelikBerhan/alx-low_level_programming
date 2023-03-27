#include "main.h"

/**
 * print_rev - Prints a String in reverse followed by a newline.
 * @s : String to be printed.
 *
 */

void print_rev(char *s)
{
	int i, len;

	int _strlen(char *s);
	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


/**
 * _strlen - returns length of a String.
 * @s : String operand.
 *
 * Return: Integer length of string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (1)
	{
		if (s[len] == 0)
			break;
		len++;
	}

	return (len);
}

