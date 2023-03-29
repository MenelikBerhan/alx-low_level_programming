#include "main.h"

/**
 * _strcat - Concatenates two strings and adds a null char at the end.
 * @dest : First operand.
 * @src : Second operand.
 *
 * Return: the concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; *(dest + i) != 0; i++)
	{
		continue;
	}

	while (1)
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
