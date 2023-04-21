#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints arguments based on the specification of format string.
 * New line added at the end. If separator is NULL it is not printed.
 * If any of the strings is NULL, "(nil)" is printed.
 * @format: A string with characters indicating data type. See Format.
 *
 * Format: c: char, i: integer, f: float and s: char.
 * Any other char will be ignored.
*/

void print_all(const char * const format, ...)
{
	int i = 0, j, bool;
	va_list aptr;
	char *str;

	va_start(aptr, format);
	while (format && format[i])
	{
		bool = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(aptr, int));
			break;
		case 'i':
			printf("%d", va_arg(aptr, int));
			break;
		case 'f':
			printf("%f", va_arg(aptr, double));
			break;
		case 's':
			str = va_arg(aptr, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			bool = 0;
		}
		j = ++i;
		while (format[j] && bool)
		{
			if (strspn((format + j++), "csif"))
			{
				printf(", ");
				break;
			}
		}
	}
	printf("\n");
	va_end(aptr);
}
