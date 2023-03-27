#include "main.h"

/**
 * puts_half - prints second half of a string followed by a new line.
 * @str : String to be printed.
 *
 * Description: if length of string is odd print the last n chars where;
 *				n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str)
{
	int i, len, start;

	int _strlen(char *s);
	len = _strlen(str);

	if (len % 2 != 0)
		start = (len + 1) / 2;
	else
		start = len / 2;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
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

