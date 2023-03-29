#include "main.h"

/**
 * _strncpy - Copies the string pointed to by src, including the
 *			terminating null byte ('\0'), to  the  buffer pointed  to  by dest.
 * @dest : First operand - destination string.
 * @src : Second operand - the string from which a max of n bytes  will be
 *							taken to copy to dest.
 * @n: the number of bytes copied from src.
 *
 * Return: the concatenated string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && *(src + i) != 0; i++)
		*(dest + i) = *(src + i);

	for (; i < n; i++)
		*(dest + i) = 0;

	return (dest);
}
