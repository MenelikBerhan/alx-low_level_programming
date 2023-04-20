#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints n number of strings with separator in between.
 * New line added at the end. If separator is NULL it is not printed.
 * If any of the strings is NULL, "(nil)" is printed.
 * @separator: The string printed b/n integers.
 * @n: The number of stings to print.
 *
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list aptr;
	char *str;

	va_start(aptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(aptr, char *);
		if (!str)
			str = "(nil)";
		printf("%s", str);
		if (i != n - 1 && separator)
			printf("%s", separator);
		if (i == n - 1)
			printf("\n");
	}

	va_end(aptr);
}
