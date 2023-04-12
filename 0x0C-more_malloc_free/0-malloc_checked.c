#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory of size b.
 * @b: The size of memory to be allocated.
 *
 * Return: a pointer to the allocated memory (Success) or
 * 98 (Failure).
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(sizeof(int) * b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
