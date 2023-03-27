#include "main.h"

/**
 * puts2 - prints every other character of a string followed by a new line.
 * @str : String to be printed.
 *
 * Example: puts("123") --> prints "13"
 */

void puts2(char *str)
{
	int i, len;

	int _strlen(char *s);
	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
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

