#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints n number of integers with separator in between.
 * New line added at the end. If separator is NULL it is not printed.
 * @separator: The string printed b/n integers.
 * @n: The number of integers to print.
 *
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list aptr;

	if (!separator)
		separator = "";
	va_start(aptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(aptr, int));

		if (i != n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(aptr);
}
