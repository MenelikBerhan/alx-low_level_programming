#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - the alphabet in lower case.
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
