#include "function_pointers.h"

/**
 * print_name - prints name using a function pointed by f.
 * @name: The string to be printed.
 * @f: A pointer to function.
 *
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
