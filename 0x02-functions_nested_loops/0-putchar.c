#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int _putchar(char c);

/**
 * print_char - prints some text.
 *
 * Return: 0
 */

int print_char(void)
{
	char *wrd = "_putchar\n";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(wrd[i]);
	}

	return (0);
}
