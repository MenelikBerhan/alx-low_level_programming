#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 *			with the constant byte b.
 * @s : A pointer to the memory where the byte is to be written.
 * @b : The character to be written.
 * @n : The number of bytes in the memory address to be filled with char b.
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < (int) n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
