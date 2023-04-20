#include "variadic_functions.h"

/**
 * sum_them_all - adds n number of passed arguments.
 * @n: The number of arguments to add.
 *
 * Return: The sum of all arguments, or 0 if n eaquals 0.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list aptr;

	va_start(aptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(aptr, int);

	va_end(aptr);
	return (sum);
}
