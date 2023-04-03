#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest : A pointer to the memory where n bytes from src are to be written.
 * @src : A pointer to the memory where n bytes will be copied from.
 * @n : The number of bytes to be copied from src to dest.
 *
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < (int) n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
