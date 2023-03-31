#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer in a custom way.
 * @b: Buffer to be printed.
 * @size: the number of bytes to be printed from buffer b.
 *
 */

void print_buffer(char *b, int size)
{
	int i = 0, j, k;

	if (size <= 0)
		printf("\n");

	while (i < size)
	{
		if (i % 10 == 0)
		{
			printf("%08x:", i);
		}

		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (!(j % 2))
				printf(" ");
			printf("%02x", *(b + i + j));
		}

		if (j < 10)
		{
			for (; j < 10; j++)
			{
				if (!(j % 2))
					printf(" ");
				printf("  ");
			}
		}

		printf(" ");
		for (k = i; k < i + 10 && k < size ; k++)
		{
			if (*(b + k) >= 32 && *(b + k) <= 126)
				printf("%c", *(b + k));
			else
				printf(".");
		}
		printf("\n");
		i += 10;
	}
}
