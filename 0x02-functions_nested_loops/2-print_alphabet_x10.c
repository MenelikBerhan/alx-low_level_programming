#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - the alphabet in lower case 10x.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
