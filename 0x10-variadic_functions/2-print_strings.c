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

	if (!separator)
		separator = "";
	va_start(aptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(aptr, char *);
		if (!str)
			str = "(nil)";

		if (i != n - 1)
			printf("%s%s", str, separator);
		else
			printf("%s\n", str);
	}

	va_end(aptr);
}
