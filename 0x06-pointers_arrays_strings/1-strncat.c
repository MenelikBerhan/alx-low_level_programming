#include "main.h"

/**
 * _strncat - Concatenates two strings using atmost n bytes from src
 *				and adds a null char at the end.
 * @dest : First operand - destination string.
 * @src : Second operand - the string from which a max of n bytes  will be
 *							taken to append to dest.
 *
 * Return: the concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; *(dest + i) != 0; i++)
	{
		continue;
	}

	while (j < n)
	{
		if (*(src + j) == 0)
		{
			*(dest + i + j) = 0;
			break;
		}
		else
		{
			*(dest + i + j) = *(src + j);
			j++;
		}
	}

	return (dest);
}
